#include <LiquidCrystal.h>
//This program uses a dely to set a medication alarm. When the alarm goes off LEDs blink, a buzzer buzzes, 
//and a message shows up on the liquid crystal screen
int ledPin = 13;              // LED connected to digital pin 13
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
bool i = 0;
int cnt = 0;
void setup() {
  pinMode(ledPin, OUTPUT); // sets the digital pin as output
  pinMode(9, OUTPUT);
}

void loop() {
  while(!i){
    tone(9, 100);
    digitalWrite(ledPin, HIGH); // sets the LED on
    delay(100);
    lcd.print("Take your meds");// waits for a second
    //digitalWrite(ledPin, LOW);  // sets the LED off
    digitalWrite(10, HIGH);    // turn on LED1 
    delay(1000);
    lcd.clear();
    lcd.print("Eat chocolate");
    digitalWrite(10, LOW); 
    delay(1000);       // waits for a second
    lcd.clear();
    if (cnt == 9){
      i = !i;
    }
    cnt++;
    noTone(9);
    /pinMode(10, OUTPUT);
    digitalWrite(10, HIGH);    // turn on LED1 
    delay(200);                  // wait for 200ms
    digitalWrite(10, LOW);    // turn on LED2
    delay(200); 
    // wait for 200ms/
}
  }
