#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;


class Circle {
public:
	int m_r;
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
class Student {
public:
	string m_name;
	int m_id;
	void setName(string name) {
		m_name = name;
	}
	void setId(int id) {
		m_id = id;
	}
	void showStudent() {
		cout << "name:" << m_name << " ID:" << m_id << endl;
	}
};
int main() {
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	Student stu;
	stu.setName("德玛西亚");
	stu.setId(250);
	stu.showStudent();
	system("pause");
	return 0;
}
