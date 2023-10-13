#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		m_A = 0;
	}
	int m_A = 0;
	static int m_B;
	void func() {
		cout << "mA:" << this->m_A << endl;
	}
	static void sfunc() {

	}
	
};



int main() {
	Person p;
	cout << sizeof(Person) << endl;//发现为4，只有一个int变量的m_A的空间
	p.func();
	system("pause");
	return 0;
}

