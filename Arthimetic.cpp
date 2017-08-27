#include "Arthimetic.h"

Arthimetic::Arthimetic(Arduboy2 &ardu) {
  this->ardu = &ardu;
}

double Arthimetic::add(double a, double b) {
  return a+b;  
}

double Arthimetic::subtract(double a, double b) {
  return a-b;  
}

double Arthimetic::divide(double a, double b) {
  return a/b;  
}

double Arthimetic::multiply(double a, double b) {
  return a*b;
}

