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
}
