// Declare and initialize a variable
const int ledPin = 13;

// Everything between {} will run once when the Arduino starts
void setup(){
  // Set ledPin (which is 13) to be an OUTPUT
  pinMode(ledPin, OUTPUT);
}

// Everything betwen {} will run in a loop
void loop(){
  // Tell ledPin to turn on at full voltage
  digitalWrite(ledPin, HIGH);
  // wait 500 ms (half a second)
  delay(500);
  // Tell ledPin to turn off/go to ground
  digitalWrite(ledPin, LOW);
  // wait 500 ms (half a second)
  delay(500);
}
