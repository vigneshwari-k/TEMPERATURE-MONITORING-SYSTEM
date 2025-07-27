#include <LiquidCrystal.h>

// Initialize LCD pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int tempPin = A0; // LM35 connected to A0

void setup() {
  lcd.begin(16, 2); // Set LCD size to 16x2
  lcd.print("Temp Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  int analogValue = analogRead(tempPin);
  float voltage = analogValue * (5.0 / 1023.0); // Convert to voltage
  float temperatureC = voltage * 100.0;         // LM35: 10mV per degree

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print((char)223); // Degree symbol
  lcd.print("C");

  delay(1000);
}
