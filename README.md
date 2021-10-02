# display-digital-body-scale-data-to-p10-led-panel
Digital body scale custom using arduino and HX711 load cell into display p10 led panel

materials:

digital body scale, arduino duemilanov/uno, HX711 load cell amplifier, 1x2 p10 led module (2 panel), psu 5v/10A for p10 led panel, psu 5v/3A for arduino, jumper cable, hub cable pin 16.

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

![alt text](http://url/to/img.png)

Instructions:
1. open the back case with a screwdriver
2. disconnect the pin header male connecting the display and battery pcb with the loadcell cable pcb
3. use the pcb piece as a place to connect the 4 wires (red-black-green-blue) coming from the loadcell pcb scales.
4. solder the jumper cables from the pcb pieces to 4 wires (red-black-green-blue) the weighing loadcell pcb.
5. use a mouse cable or speaker cable containing 4 wires and solder it to the jumper cable pcb piece.
6. match the 4 wires coming from the weighing sensor to the load cell amplifier HX711 red - red, black - black, white - white, green - green
7. adjust the 4 pins on the HX711 load cell amplifier with the pins on the Arduino board:

VCC&nbsp;&nbsp; -- &nbsp;&nbsp;5v, 

DAT&nbsp;&nbsp; -- &nbsp;&nbsp;&nbsp;2, 

CLK&nbsp;&nbsp; -- &nbsp;&nbsp;&nbsp;3, 

GND&nbsp;&nbsp; -- &nbsp;&nbsp;&nbsp;GND


loadcell pin connect to  HX711 green pcb pin 

E+ &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp&nbsp;E+

S+ &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;A+

E- &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;E-

S- &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;A-

loadcell pin connect to  HX711 purple pcb pin 

E+ &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;E+

S+ &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;A+

E- &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;E-

S- &nbsp;&nbsp;&nbsp; --  &nbsp;&nbsp;&nbsp;&nbsp;A-

References:

1. https://github.com/jenizar/arduino-digital-hanging-scale-data-on-p10-led-panel
2. https://learn.sparkfun.com/tutorials/load-cell-amplifier-hx711-breakout-hookup-guide/all
3. https://www.instructables.com/Arduino-Bathroom-Scale-With-50-Kg-Load-Cells-and-H/
4. https://youtu.be/LIuf2egMioA
