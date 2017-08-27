#ifndef Arthimetic_h
#define Arthimetic_h

#include <Arduboy2.h>

class Arthimetic {
public:
  Arthimetic(Arduboy2 &arduboy);
  double add(double a, double b);
  double subtract(double a, double b);
  double divide(double a, double b);
  double multiply(double a, double b);
  
  double Sin(double x);
  double Cos(double x); 
  double Tan(double x); 

  double Asin(double x);
  double Acos(double x); 
  double Atan(double x); 
  double Atan2(double x, double yi); 

  double Sinh(double x);
  double Cosh(double x); 
  double Tanh(double x);

  double Pow(double x, double y);
  double SQRT(double x);

  double Ceil(double x);
  double Floor(double x);

private:
  Arduboy2 *ardu;

};

#endif //_Arthimetic_h
