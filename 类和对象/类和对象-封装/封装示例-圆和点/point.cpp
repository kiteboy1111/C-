#include"point.h"
using namespace std;
//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

//点类

	void Point::setX(int x) {
		m_X = x;
	}
	int Point::getX() {
		return m_X;
	}
	void Point::setY(int y) {
		m_Y = y;
	}
	int Point::getY() {
		return m_Y;
	}
