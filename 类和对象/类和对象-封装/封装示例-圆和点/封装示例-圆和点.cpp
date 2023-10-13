#include<iostream>
#include<string>
using namespace std;
#include"circle.h"
#include"point.h"
//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

void isInCircle(Circle& c,Point &p) {
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) > c.getR()*c.getR()) {
		cout << "在圆外" << endl;
	}
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) < c.getR() * c.getR()) {
		cout << "在圆内" << endl;
	}
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) == c.getR() * c.getR()) {
		cout << "在圆上" << endl;
	}
}
int main() {
	Circle c;
	Point p;
	Point Center;
	Center.setX(10);
	Center.setY(0);
	p.setX(12);
	p.setY(11);
	c.setR(10);
	c.setP(Center);
	isInCircle(c, p);
	system("pause");
	return 0;
}