
#include "DFRobot_MAX98357A.h"
#include "SD.h"
#include "SPI.h"

#define I2S_BCLK   GPIO_NUM_25
#define I2S_LRCLK  GPIO_NUM_26
#define I2S_DIN    GPIO_NUM_22
#define SD_CS      5
#define BTN_PLAY   34
#define BTN_SKIP   35
#define POT_VOL    36

DFRobot_MAX98357A amplifier;

#define MAX_SONGS 50
String playlist[MAX_SONGS];
int songCount   = 0;
int currentSong = -1;

unsigned long lastBtn1 = 0;
unsigned long lastBtn2 = 0;
#define DEBOUNCE_MS 300

void setup() {
  Serial.begin(115200);

  pinMode(BTN_PLAY, INPUT); 
  pinMode(BTN_SKIP, INPUT);

  SPI.begin(18, 19, 23, SD_CS);
  if (!SD.begin(SD_CS)) {
    Serial.println("ERROR: SD card not found!");
    while (true);
  }

  if (!amplifier.begin("", I2S_BCLK, I2S_LRCLK, I2S_DIN)) {
    Serial.println("ERROR: Amplifier init failed!");
    while (true);
  }
  if (!amplifier.initSDCard(SD_CS)) {
    Serial.println("ERROR: Amplifier SD init failed!");
    while (true);
  }

  amplifier.setVolume(5); 

  amplifier.scanSDMusic(playlist);
  while (songCount < MAX_SONGS && playlist[songCount].length() > 0) {
    Serial.printf("[%d] %s\n", songCount, playlist[songCount].c_str());
    songCount++;
  }
  Serial.printf("Ready — %d songs found\n", songCount);
}

void loop() {

  int vol = map(analogRead(POT_VOL), 0, 4095, 0, 9);
  amplifier.setVolume((float)vol);

  if (digitalRead(BTN_PLAY) == LOW && millis() - lastBtn1 > DEBOUNCE_MS) {
    lastBtn1 = millis();
    if (songCount > 0) {
      int next;
      do { next = random(0, songCount); } while (next == currentSong && songCount > 1);
      currentSong = next;
      Serial.printf("Playing: %s\n", playlist[currentSong].c_str());
      amplifier.playSDMusic(playlist[currentSong].c_str());
    }
  }

  if (digitalRead(BTN_SKIP) == LOW && millis() - lastBtn2 > DEBOUNCE_MS) {
    lastBtn2 = millis();
    if (songCount > 0) {
      amplifier.SDPlayerControl(SD_AMPLIFIER_STOP);
      currentSong = (currentSong + 1) % songCount;
      Serial.printf("Skipping to: %s\n", playlist[currentSong].c_str());
      amplifier.playSDMusic(playlist[currentSong].c_str());
    }
  }
}
