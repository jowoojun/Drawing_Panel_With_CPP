#pragma once
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;

class CRectangle :public Shape{
public:
  CRectangle(int x, int y, int w, int h);  // initalize variables
  void display();  // draw Rectangle

private:
};