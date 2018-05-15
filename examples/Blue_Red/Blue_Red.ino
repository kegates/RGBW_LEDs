#include <RGBW_Strip.h>

#define rpin 5
#define gpin 4
#define bpin 3
#define wpin 2

Color c;

Strip strip(rpin, gpin, bpin, wpin);

void setup() {
}

void loop() {
  c.set(50,0,0,0);
  strip.setCol(c);
  delay(1000);
  c.set(0,0,50,0);
  strip.setCol(c);
  delay(1000);
}
