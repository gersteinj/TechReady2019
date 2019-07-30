// include neopixel library
#include <Adafruit_NeoPixel.h>

// change the led pin and number of pixels if needed
int led = 6;
int numpixels = 90;

// setup the neopixels. You can use this line exactly like this
Adafruit_NeoPixel pixels(numpixels, led, NEO_GRB + NEO_KHZ800);

void setup(){
  pixels.begin();      //  initialize neopixels
  pixels.setBrightness(50);   // set brightness (range is 0-255)
  pixels.clear();      //  set all pixel colors to off
  
  // sample of individual pixels
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.setPixelColor(1, pixels.Color(255, 70, 0));
  pixels.setPixelColor(2, pixels.Color(255, 200, 0));
  pixels.setPixelColor(3, pixels.Color(50, 255, 0));
  pixels.show();       //  show the specified colors

  //  wait 1 second then clear
  delay(1000);
  pixels.clear();
  pixels.show();
}

void loop(){
  /*
   * for (create variable; logical test; increment) {
   *    do something;
   * }
   */
  cloudyday();
  delay(1000);
}

void cloudyday() {
  pixels.setBrightness(50);
  for(int i = 0; i < numpixels; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 200, 150));
  }
  pixels.show();
}
