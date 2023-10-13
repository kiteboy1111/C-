#include<iostream>
#include<string>
using namespace std;
class Phone {
public:
	Phone(string name) {
		m_PhoneName = name;
		cout << "2gou zao " << endl;
	}
	~Phone() {
		cout << "2xigou" << endl;
	}
	string m_PhoneName;
};




class Person {
public:
	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "1gou zao " << endl;
	}
	~Person() {
		cout << "1xi gou " << endl;
	}
	void Print() {
		cout << m_Name << " use " << m_Phone.m_PhoneName << endl;
	}
	string m_Name;
	Phone m_Phone;

};
void test01() {
	Person p("GG gue", "redmi k50u");
	p.Print();
}
int main() {
	test01();
	system("pause");
	return 0;
}
