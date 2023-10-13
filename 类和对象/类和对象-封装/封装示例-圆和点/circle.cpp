#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
//‘≤¿‡

	void Circle::setR(int R) {
		m_R = R;
	}
	int Circle::getR() {
		return m_R;
	}
	void Circle::setP(Point Center) {
		m_Center = Center;
	}
	Point Circle::getCenter() {
		return m_Center;
	}

