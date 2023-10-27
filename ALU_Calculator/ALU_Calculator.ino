#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include  <Keypad.h> //Header file for Keypad from https://github.com/Chris--A/Keypad
const  byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define  the Keymap
char keys[ROWS][COLS] = {

  {'1','2','3','A'},

  {'4','5','6','B'},

  {'7','8','9','C'},

  {'*','0','#','D'}

};


const int button1 = 8;  // the number of the pushbutton pin
const int button2 = 9;  // the number of the pushbutton pin
int button1State = 0;  // variable for reading the pushbutton status
int button2State = 0;  // variable for reading the pushbutton status


void setup() {
  Serial.begin(9600);  // start serial for output
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the backlight

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  lcd.setCursor(0, 0); // Set cursor to the first line, first position
  lcd.print("ALU Calculator");
  lcd.setCursor(0, 1);

  key = kpd.getKey();  //storing pressed key value in a char

  if (key!=NO_KEY)
  DetectButtons();

  if  (result==true)
  CalculateResult();

  DisplayResult();
}

