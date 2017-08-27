#ifndef Draw_h
#define Draw_h

#include <Arduboy2.h>

typedef struct {
  String name;
  String icon;
  byte x;
  byte y;
} ArthimeticMenu_t;

class Draw {
public:
  Draw(Arduboy2 &arduboy);
  void drawArthimeticMenu();
  void drawCalcScreen();
  void drawNumberMenu();
  void drawHud(); //Draws the hud at the bottom

private:
  Arduboy2 *ardu;
  ArthimeticMenu_t artmenu[18];

};

#endif //_Draw_h
