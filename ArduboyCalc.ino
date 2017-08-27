#include <Arduboy2.h>

Arduboy2 ardu;

void setup() {
  // put your setup code here, to run once:
  ardu.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  ardu.display(CLEAR_BUFFER);

}
