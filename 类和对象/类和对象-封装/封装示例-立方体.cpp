#include<iostream>
#include<string>
using namespace std;
//设计立方体类(Cube)

//求出立方体的面积和体积

//分别用全局函数和成员函数判断两个立方体是否相等。
class Cube {
public:
	//长宽高设置获取
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H= h;
	}
	int getH() {
		return m_H;
	}
	//立方体的面积和体积
	int calculateS() {
		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
	}
	int calculateV() {
		return m_L * m_H * m_W;
	}
	//成员函数
	bool isSameByclass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		else
			return false;
	}
	

	//私有长宽高
private:
	int m_L;
	int m_W;
	int m_H;
};
//全局函数
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	else
		return false;

}

int main() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "c1的面积为： " << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculateV () << endl;
	Cube c2;
	c2.setL(11);
	c2.setW(10);
	c2.setH(10);
	if (isSame(c1, c2)) {
		cout << "两个立方体相等" << endl;
	}
	else {
		cout << "两个立方体不相等" << endl;
	}
	if (c1.isSameByclass(c2)) {
		cout << "两个立方体相等" << endl;
	}
	else {
		cout << "两个立方体不相等" << endl;
	}
	system("pause");
	return 0;
}