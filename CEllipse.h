#pragma once
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;

class CEllipse :public Shape {
public:
  CEllipse(int x, int y, int sx, int sy);  // initalize variables
  void display();  // draw Ellipse

private:
};