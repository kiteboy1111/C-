#include<iostream>
#include<string>
using namespace std;
class Person {

public:
	static int m_A;
private:
	static
	static int m_B;//私有权限访问不到

};
int Person::m_A = 10;
int Person::m_B = 10;

void test01() {
	Person p1;
	p1.m_A = 100;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p2.m_A = " << p2.m_A << endl;


	cout << "m_A = " << Person::m_A << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}