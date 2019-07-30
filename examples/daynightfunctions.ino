String daynight = "day";

void setup(){
  Serial.begin(9600);
}

void loop(){
  if (millis() % 3000 == 0) {
    
    if (daynight == "day") {
      daynight = "night";
    }
    else {
      daynight = "day";
    }
    delay(1);
    Serial.println(daynight);
  }
  if (daynight == "night") {
  //    if daynight is night, call the night() function
    night();
  }
  if (daynight == "day") {
  //    if daynight is day, call the day() function
    day();
  }
}

// Defining functions for light modes

void day() {
  digitalWrite(5, HIGH);
}

void night() {
  digitalWrite(5, LOW);
}
