String daynight = "day";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (millis() % 1500 == 0) {

    if (daynight == "day" || daynight == "cloudy") {
      daynight = "night";
    }
    else {
      if (random(20) < 10) {
        daynight = "cloudy";
      } else {
        daynight = "day";
      }
    }
    delay(1);
    Serial.println(daynight);
  }
}
