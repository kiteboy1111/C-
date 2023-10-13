#pragma once
#include<iostream>
using namespace std;
#include"point.h"
//‘≤¿‡
class Circle {
public:
	void setR(int R);
	int getR();
	void setP(Point Center);
	Point getCenter(); 
private:
	//
	int m_R;
	Point m_Center;
};