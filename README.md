# Smart Phone Controlled Object Detector

To get started with this project you would need to have-
+ Arduino Uno
+ Motor Sheild
+ Ultra Sonic Sensor
+ Bluetooth Module
+ Buzzer
+ Breadboard
+ Chassis board, Gear motor, Battery holder, Jumper wires, Wheels

Software requirements-
+ Arduino IDE

## Connections

+ Connection between Bluetooth module and Arduino Uno:
 ![](connections/Connection_arduino,bluetooth.png)

+ Connection between Ultra Sonic Sensor and Arduino Uno:
 ![](connections/sesor_connection.png)

+ Connection among Buzzer, Ultra Sonic Sensor and Arduino Uno:
 ![](connections/Connection_arduino,sensor,buzzer.png)

+ Connection among Gear Motors, Motor Shield and Battery: 
 ![](connections/Connection_motorShield,DCmotor.jpg)

## Working Process of the Device - 
+ At first Smartphone has to be connected with the Bluetooth Module of the device. 
+ Any app can be used to control the movement of the device. [*the symbols of the code may need to be moderated according the symbols used by the app*]
+ When the device will move by the Smartphone, if it gets any object in 50cm distance it will activate the buzzer. 
+ Sensor calculates the distance by the time that the ultra sonic wave returns, thus the work is done. 
