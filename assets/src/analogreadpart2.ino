int led = 3;

void setup() {
  // put your setup code here, to run once:
  // start serial communications
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // print out the value read from the potentiometer on pin A0 
  Serial.println( analogRead(A0) );
  delay(100);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
