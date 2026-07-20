---
title: "Minecraft jukebox"
author: "ba9latouti"
description: "As a minecraft player, I thought it would be cool to build a jukebox irl and load it with minecraft songs."
created_at: "2026-05-31"
---

# May 31st : starting the project

As a minecraft player and after hitting that 2 weeks phase, I thought it would be cool to design and build a minecraft jukebox irl loaded with minecraft songs. So today I started working on the project. The overall build would have 2 switches, one to play/stop songs and the other for skipping a song and a potentiometer to control the volume. Initially, I wanted to make a PCB with kicad but i couldn't find the footprints and symbols of many components and it took me too much time to find some so I decided to work on the circuit diagram on cirkit first. I worked first with the esp32-wroom-32e and made the design but then cirkit crashed and some progress was not saved. but before rebuilding it like it was, I showed the final build to some friends and they advised me to use the esp32 devkit V1 instead because it has a voltage regulator and could work directly with a 5V USB-c module power supply.
I used some AI to help me choose the pins to use in my microcontroller.

<img width="1257" height="745" alt="image" src="https://github.com/user-attachments/assets/fae57c41-3366-4677-92f9-3d8446b0cd5a" />

# June 2nd : working on the CAD

Next I went to the CAD part of my minecraft jukebox.
I first started by designing one of the faces then the top and bottom parts. at first I was going to leave the sides of the parts as straight lines but then I figured out that it would be a great idea to add shapes to them so they fit like a puzzle. Im planning to glue the parts but I will also design L shaped parts so I can fix them with screws too.

<img width="751" height="650" alt="image" src="https://github.com/user-attachments/assets/a9ba2bd8-c4b6-46b3-999b-71407e0f3943" />

# June 5th : second session of CAD

Second session of CAD. I finished setting the last face of my minecraft jukebox and making the tiny gaps so it fits together like a puzzle.

<img width="1085" height="801" alt="image" src="https://github.com/user-attachments/assets/b8928fd2-2a5e-4015-af66-c2cd879a2801" />

I didn't do the same part four times because each part needs to be separated from the others and have its own solidworks file because next time I will design on them the cases for the electronic components. I also designed the L shaped fixing parts so the assembly can be fixed using screws and not only glue and dreams.

<img width="475" height="503" alt="image" src="https://github.com/user-attachments/assets/982ef2d2-f75d-4545-89be-53b23c0a124a" />
<img width="667" height="702" alt="image" src="https://github.com/user-attachments/assets/f6c85d26-7fa1-4e5a-8edb-29ff050b8d83" />

# July 16th : came back to work on my project

After a one month break, I came back to this project. I was focused on other projects during this time. So when i opened my assembly again, I was not satisfied from the way it looked. the fixing parts were outside of the jukebox and the result wasn't great. So during this session, I worked on the design of the fixing parts and the holes and reassembled my project. I had a bunch of rebuild errors and mates breaking others so I restarted the assembly from scratch and finished it quickly. Now the assembly looks cleaner than before.

<img width="712" height="637" alt="Screenshot 2026-07-16 190511" src="https://github.com/user-attachments/assets/e652d36d-fcef-4a14-bb60-375a3dcd03e3" />

# July 19th : finishing the assembly

today I finished working on my assembly as I added M3 screws and bolts to the the fixing parts. I initially put them all with the same length (12mm) but then I realised that the upper screws were colliding so I spaced them a little bit and decreased their length to 10mm.

<img width="411" height="336" alt="Screenshot 2026-07-19 023308" src="https://github.com/user-attachments/assets/1baab104-8b45-48fe-bd51-e99f4c81c56e" />

when I added the bolts, I also find an other mistake. the bolts were colliding with the part itself so it is impossible to assemble them in real life. so i added some space to make them rotate freely.

<img width="763" height="553" alt="Screenshot 2026-07-19 023241" src="https://github.com/user-attachments/assets/8f702399-c2a7-4008-9e04-f94426a88fc2" />

then I started working on the electronics. I used 3 60mm*40mm parametric prototype pcb plates and inserted my components. solidworks crashed and i didnt save my progress so i had to do it twice. Then I assembled everything and made openings for the USB ports. 

<img width="767" height="717" alt="Screenshot 2026-07-19 044041" src="https://github.com/user-attachments/assets/52343fdc-7322-442f-bb87-8d5978b2155d" />
<img width="618" height="547" alt="Screenshot 2026-07-19 023641" src="https://github.com/user-attachments/assets/3192a136-bb99-4a54-b6fb-89323dd66259" />

# July 20th : finishing the project

The last thing to work on was the firmware. So I searched for the MAX98357A and the micro SD adapter module on github to get the librairies and some examples. I tried to understand the code so I can make changes to the main code that I generated with AI later. I couldn't make the code myself so I didn't record the process I just got the code from claude with the librairies needed (DFRobot_MAX98357A.h and SD.h) and applied some changes like removing the unnecassary features like led animation, corrected a mistake that ai made which was assuming the number of songs I will load in the SD card and working with this information and focused more on trying to understand it and committed it to github.

<img width="867" height="833" alt="image" src="https://github.com/user-attachments/assets/10ee00c7-d44e-4d56-affb-160a8d0cbb1a" />
