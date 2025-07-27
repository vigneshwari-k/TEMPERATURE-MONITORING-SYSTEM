# TEMPERATURE-MONITORING-SYSTEM

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: VIGNESHWARI K

**INTERN ID**:CT04DH911

**DOMAIN**: EMBEDDED SYSTEMS

**DURATION**: 4 WEEKS

**MENTOR**: NEELA SANTHOSH

DESCRIPTION:
This project is a simple temperature monitoring system that uses an Arduino Uno, an LM35 temperature sensor, and a 16x2 LCD display. The main function of the system is to read ambient temperature using the LM35 sensor and display it in degrees Celsius on the LCD. The LM35 sensor outputs an analog voltage that is directly proportional to the temperature in Celsius (10 mV per degree Celsius). This analog signal is read by the Arduino through the analog input pin A0, converted into a readable temperature value, and then shown on the LCD. A potentiometer is used to control the contrast of the LCD for better visibility. The circuit is powered via a USB connection, and the temperature updates every second on the screen. This project is useful for learning about analog sensor integration, LCD interfacing, and basic Arduino programming.
Code Description:
The LCD is initialized using the LiquidCrystal library.
The setup() function displays a welcome message for 2 seconds.
The loop() reads the analog input from the LM35 sensor, converts it to voltage, and then to temperature.
The temperature value is printed to the LCD every second.
Applications:
Home Temperature Monitoring:
Easily used in homes to monitor and display indoor temperatures.
Greenhouse Environmental Control:
Helps maintain optimal temperature conditions for plant growth.
Server Room Monitoring:
Can be deployed to track temperature levels in server or data rooms.
Educational Purposes:
Great for students and beginners to understand sensors, analog input, and LCD interfacing.
Weather Stations:
Can be integrated into simple weather station setups to measure and display local temperature conditions.

#output

<img width="622" height="292" alt="Image" src="https://github.com/user-attachments/assets/afc34b63-f9c5-4629-b64c-7e975ab04fe1" />
