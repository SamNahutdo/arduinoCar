# arduinoCarCL


Things used in this project
Hardware components
· ARDUINO UNO
· L293D MOTOR DRIVER
· HC-05 BLUETOOTH MODULE
· JOHNSON MOTOR
· WHEELS
· 18650 LI-ION BATTERY
· 18650 LI-ION BATTERY HOLDER
· CHASSIS FOR ROBOT BODY
· PCB BOARD BY JLCPCB
· JUMPER WIRES


SOFTWARE COMPONENTS
· ARDUINO IDE


Hand tools
· Soldering iron
· Drill Machine
· Glue Gun


How Arduino Bluetooth Controlled Car Works?
This is a simple Micro-controller based car. The Micro-Controller is connected to the car. The Arduino is doing all this job. For receiving data wirelessly we are using the HC-05 Bluetooth module.

At first, We have to connect/ pair the Bluetooth module with the phone (Android) you want to control. Now, we are doing different operations such as when we press the forward button then the Phone sends a data value to theBluetooth module.

Next, we have to code in a way that if Arduino Gets a Certain Data (Suppose ‘F’ for forwarding) we have to make a certain condition for running the car in a certain direction. So, basically, there are many switch cases in the Arduino code. For a known condition or a switch case, the car will perform the added functions in the code.

In the Same way, F, B, L, R are used for moving the car Forward, Backward, Left, Right movements.


Now I had to upload the code to the Arduino UNO.So I have attached the USB cable that comes with the Arduino UNO board and follows the steps mentioned below
· Open Arduino IDE on your PC
· Connect ARDUINO with PC via USB Cable
· Go to Tools > manage libraries > Search for AF Motor driver and download
· Go to Tools > Board > and select Arduino\Genuino UNO
· Go to Tools > Port > Select proper COM port
· Now Verify the code and then upload it
***Please don’t forget to remove/detach the HC-05 Bluetooth Module before uploading the code. Connect it after the code has been uploaded successfully.***


About the Circuit Diagram for Arduino Bluetooth Controlled Car View the pic




