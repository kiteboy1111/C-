
#include<iostream>
using namespace std;

class Person {

public:
	Person() {
		cout << "无参构造" << endl;
	}

	Person(int a) {
		age = a;
		cout << "有参构造" << endl;
	}
	Person(const Person& p) {
		age = p.age;
		cout << "拷贝构造" << endl;
	}
	~Person() {
		cout << "析构函数" << endl;
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
