#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		cout << "无参构造" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "有参构造" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "拷贝构造" << endl;
		mAge = p.mAge;
	}
	~Person() {
		cout << "析构函数" << endl;
	}
public:
	int mAge;
};



void test01() {
	Person man(100);
	Person newman(man);
	Person newman2 = man;
}

void doWork(Person p1){}

void test02() {
	Person p;
	doWork(p);
}
Person doWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;
}
int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}

