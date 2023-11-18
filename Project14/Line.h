#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Line : public Shape {
protected:
	virtual void draw();
};