#pragma once
#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

class UI {
public:
	static int getMenu() {
		int key;
		cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
		cin >> key;
		return key;
	}
	static int getShapeTypeToInsert() {
		int key;
		cout << "��:1, ��:2, �簢��:3 >>";
		cin >> key;
		return key;
	}
	static int getShapeIndexToDelete() {
		int key;
		cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
		cin >> key;
		return key;
	}
};