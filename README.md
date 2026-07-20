# minecraft-jukebox

As a minecraft player, I thought it would be cool to design a jukebox irl and load it with minecraft songs. So I wanted to create something cool and shiny so I decided to add RGB LEDs to my project.

<img width="842" height="747" alt="image" src="https://github.com/user-attachments/assets/1e37e115-fd88-4cf6-81e5-84edbb356441" />

After pressing the button, this minecraft jukebox can play from a list of loaded minecraft songs in a SD card a random song, that you can skip by pressing the second button. The volume can also be adjusted using the potentiometer.

<img width="1066" height="462" alt="image" src="https://github.com/user-attachments/assets/2db610da-332e-4898-ad90-dfa5ca69c8e0" />

The outer shell can be made with laser cuts, and everything is fixed together using these small fixing parts and M3 screws and nuts.

<img width="763" height="553" alt="Screenshot 2026-07-19 023241" src="https://github.com/user-attachments/assets/dd5f40e7-94c1-4bfe-b300-9b49142e127e" />

The edges are designed in a puzzle-like shape so they can be easily assembled, especially if the material that will be used is wood.

<img width="386" height="462" alt="image" src="https://github.com/user-attachments/assets/38f0bacf-df49-44f0-a146-8c0fcf5b2167" />

for the circuit, it divides into two main sections : the power supply and the actual part that will read the songs and convert them to the speaker. So there is a USB-c sink so it can be directly alimented from the pc. the RGB LEDs are directly connected to the sink as they require 5V that can be directly pulled. The issue comes next as the micro SD adapter needs 3.3V instead of 5V, so I used an AMS1117-3.3V Module to convert the voltage. the we have the SD card slot and the adapter connected to our microcontroller (esp32 DevKit v1) connected to the amplifier MAX98357A and finally the speaker
here is the link to the circuit diagram : https://app.cirkitdesigner.com/project/ff61a1b3-abc5-473c-aff6-b312430bfb54

<img width="1177" height="702" alt="Screenshot 2026-07-20 122112" src="https://github.com/user-attachments/assets/9881793a-e9fd-475b-9560-a21caa1338bb" />

# How to assemble 

You have to start with the bottom part, then connect the two parts that will hold the parametric prototype pcb plates and connect everything with the fixing parts, M3 screw and nuts. then you can add the circuits and fix them with 2mm rods.

<img width="1007" height="791" alt="Screenshot 2026-07-20 121754" src="https://github.com/user-attachments/assets/7a612931-955c-4d85-842e-54e7c31a2e2a" />

Then you can add the rest of the parts and finish with the top part with the push buttons and the potentiometer fixed beforehand. And there you go ! here is your minecraft jukebox !

<img width="560" height="462" alt="image" src="https://github.com/user-attachments/assets/d723137d-a1d5-4cf6-ae30-12b351c838c3" />

# Important

Initially, the assembly had all the components including the electronics and how they are assembled, but the file was exceeding the limit and couldn't be uploaded to github so I removed them.
