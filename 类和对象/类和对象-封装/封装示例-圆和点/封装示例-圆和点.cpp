#include<iostream>
#include<string>
using namespace std;
#include"circle.h"
#include"point.h"
//���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��

void isInCircle(Circle& c,Point &p) {
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) > c.getR()*c.getR()) {
		cout << "��Բ��" << endl;
	}
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) < c.getR() * c.getR()) {
		cout << "��Բ��" << endl;
	}
	if (((c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY())) == c.getR() * c.getR()) {
		cout << "��Բ��" << endl;
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