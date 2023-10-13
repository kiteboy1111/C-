#include<iostream>
using namespace std;
class Person {
public:
	Person() {};
	Person(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}
	//1成员函数实现
	Person operator+(const Person& p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}


public:
	int m_A;
	int m_B;
};
//2全局函数实现
//Person operator+ (const Person& p1, const Person& p2) {
//	Person temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//3
Person operator+(const Person& p2, int val) {
	Person temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;
	return temp;
}
void test() {
	Person p1(10, 10);
	Person p2(20, 20);
	Person p3 = p2 + p1;
	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
	Person p4 = p3 + 10;
	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
}
int main() {
	test();
	system("pause");
	return 0;
}

