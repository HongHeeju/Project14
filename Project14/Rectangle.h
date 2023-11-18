#pragma once
#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
using namespace std;

class Rectangle : public Shape {
protected:
	virtual void draw();
};
