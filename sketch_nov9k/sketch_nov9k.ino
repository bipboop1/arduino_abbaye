/*
  @@@@@@@@@@@@@@@@@@@@@@                                                                                                                               
  @@@@@@@@@@@@@@@@@@@@@@             @@@.    @@@    @@@.     @@@@    @@@@        @@@@@@@@@        @@@@@@@@@@@@@.     .@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@%%@@@%%@@@%%@@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@@@@@@@        @@@@@@@@@@@@@@     @@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@  @@@  @@@  @@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@            @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@   @    @   @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@@@@@@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@@@@@@@@ 
  @@@@@            @@@@@             @@@@###@@@@@##@@@@@     @@@@    @@@@      @@@@@@@@@@@@       #@@@@@###@@@@@     ##@@@@@###@@@@       @@@@@@@@@@@
  @@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@@     @@@@    @@@@      @@@@    @@@@@      @@@@@@@@@@@@@@     @@@@@@@@@@@@@@      @@@@     @@@@
  @@@@@@@@@@@@@@@@@@@@@@
  
  Whadda WPM458 vibration motor module example
  
  This example produces the classic "Nokia SMS vibration" pattern on the vibration motor.
  
  For more information about the Whadda WPM458 vibration motor module, check the manual available at https://whadda.com

  AUTHOR: Midas Gossye (Whadda/Velleman)
  Date: 09/03/2021
  URL: https://github.com/WhaddaMakers/WPM458
*/


const int vibrationPin = 13; // Set connection pin to signal pin of vibration module

// Set the duration of vibration pulses and pauses array in ms, produces ... -- ... (SMS) vibration from old Nokia Phones
const unsigned int melody[] = {125, 125, 125, 125, 125, 325, 250, 250, 250, 325, 125, 125, 125, 125, 125, 125};

void setup() {
  
  pinMode(vibrationPin, OUTPUT); // Set pin as output
  digitalWrite(vibrationPin, LOW); // Set pin low to make sure vibration motor is off
}

void loop() {

  // For index 0->15 (indexes of melody array)...
  for(int index=0; index < 16; index++) {
    
    if(index %2 == 0) digitalWrite(vibrationPin,HIGH); // If index is even, melody duration is pulse, switch vibration motor on
    else digitalWrite(vibrationPin, LOW); // Else, index is odd, melody duration is pause, switch vibration motor off
    delay(melody[index]); // Wait for number of ms of current melody index
  }
  delay(2000); // Wait for 2s (= 2000 ms)

}