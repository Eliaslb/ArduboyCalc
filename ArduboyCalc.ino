#include <Arduboy2.h>
#include "Arthimetic.h"
#include "Draw.h"

#define PI 3.14159265
#define FPS 60

Arduboy2 ardu;

Draw draw(ardu);
Arthimetic art(ardu);

void setup() {
  // put your setup code here, to run once:
  ardu.begin();
  ardu.setFrameRate(FPS);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (!ardu.nextFrame()) {
    return;
  }
  
  ardu.display(CLEAR_BUFFER);

}
