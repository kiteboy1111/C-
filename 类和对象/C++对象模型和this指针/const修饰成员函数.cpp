#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}

	void showa() const{
		this->m_B = 100;
	}
	void showb()const {
		//m_A = 1000; �������޸�
	}
public:
	int m_A;
	mutable int m_B;
};

int main() {


	system("pause");
	return 0;
}

