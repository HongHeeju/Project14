#pragma once
#include <iostream>
#include "Shape.h"
#include "Line.h"
using namespace std;

class Circle : public Shape {
protected:
	virtual void draw();
};