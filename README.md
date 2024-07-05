# microcontroller-arduino

## Binary Sum Software with Arduino
This software enables binary addition operations between two sets of 4-bit inputs using an Arduino microcontroller. It utilizes digital pins for input and output, displaying the result of the addition along with the carry bit on LED indicators.

## Features
Perform binary addition between two 4-bit numbers.  
Display individual results and carry bit using LEDs connected to Arduino digital output pins.  
Simple and efficient operation suitable for educational purposes and basic applications.  

## Setup Instructions
#### Hardware Setup:

Connect digital input pins (0-7) to input devices representing the binary bits to be summed.
Connect digital output pins (8-12) to LEDs or other output devices to display the sum and carry bit.
Ensure the Arduino board is properly connected to your computer via USB.
## Software Setup:

Open the Arduino IDE on your computer.
Copy and paste the provided code into the IDE's editing window.
Select the appropriate board and port in the Arduino IDE.
Upload the code to your Arduino board by clicking the upload button.
Usage

## Operating the Software:

Press a button connected to the digital pin 13 to initiate the addition operation.
The software reads the states of digital input pins (0-7), performs binary addition, and updates the output LEDs accordingly.
LEDs connected to digital output pins (8-12) will indicate the results of the addition (sum) and the carry bit.
Example Scenario:

Set the binary inputs using switches or buttons connected to digital pins 0-7.
Press the button connected to digital pin 13 to see the addition result displayed on LEDs.  

## Contributing
Contributions are welcome! Please see the CONTRIBUTING.md file for guidelines.

## License
This project is licensed under the Creative Commons License - see the license file for details./
