
#include<iostream>
using namespace std;

class Person {

public:
	Person() {
		cout << "�޲ι���" << endl;
	}

	Person(int a) {
		age = a;
		cout << "�вι���" << endl;
	}
	Person(const Person& p) {
		age = p.age;
		cout << "��������" << endl;
	}
	~Person() {
		cout << "��������" << endl;
	}
private:
	int age;
};
void test01() {
	Person p;
}
void test02() {
	Person p1(10);
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
