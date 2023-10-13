#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		cout << "无参构造函数" << endl;
	}
	Person(int a) {
		age = a;
		cout << "youcan" << endl;
	}
	Person(const Person& p) {
		age = p.age;
		cout << "kaobei" << endl;
	}
	~Person() {
		cout << "xi gou" << endl;
	}
public:
	int age;
};

void test01() {
	Person p1(18);
	Person p2(p1);
	cout << "p2 age :" << p2.age << endl;
}

void test02() {
	
}

int main() {
	test01();

	system("pause");
	return 0;
}
