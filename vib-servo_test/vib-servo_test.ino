#include <Servo.h>

const int vibrationPin = 13; // Set connection pin to signal pin of vibration module

// Set the duration of vibration pulses and pauses array in ms, produces ... -- ... (SMS) vibration from old Nokia Phones
const unsigned int melody[] = {125, 125, 125, 125, 125, 325, 250, 250, 250, 325, 125, 125, 125, 125, 125, 125};

Servo   servo;

void setup() {
  pinMode(vibrationPin, OUTPUT); // Set pin as output
  digitalWrite(vibrationPin, LOW); // Set pin low to make sure vibration motor is off
  servo.attach(9);
  servo.write(0);
  delay(1000);
}

void loop() {

  servo.write(20);
  for(int index=0; index < 16; index++) {
    
    if(index %2 == 0) digitalWrite(vibrationPin,HIGH); // If index is even, melody duration is pulse, switch vibration motor on
    else digitalWrite(vibrationPin, LOW); // Else, index is odd, melody duration is pause, switch vibration motor off
    delay(melody[index]); // Wait for number of ms of current melody index
  }
  servo.write(40);
  delay(2000); // Wait for 2s (= 2000 ms)
}
