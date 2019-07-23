// Declare and initialize variables
int red = 6;
int green = 5;
int blue = 3;
int t = 500;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop(){
    // blink red
    digitalWrite(red, HIGH);
    delay(t);
    digitalWrite(red, LOW);
    delay(t);

    // blink green
    digitalWrite(green, HIGH);
    delay(t);
    digitalWrite(green, LOW);
    delay(t);

    // blink blue
    digitalWrite(blue, HIGH);
    delay(t);
    digitalWrite(blue, LOW);
    delay(t);
}
