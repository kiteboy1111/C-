#include <iostream>
using namespace std;
//这里只介绍最常用的一种

template <class NameType,class AgeType = int >
class Person {
public:
	Person(NameType name, AgeType age) {
		this->mName = name;
		this->mAge = age;
	}
	void showPerson() {
		cout << "name:" <<this->mName << "age:" << this->mAge << endl;
	}

	NameType mName;
	AgeType mAge;

};

void print(Person<string, int >& p) {
	p.showPerson();
}

void test() {
	Person<string, int > p ("nidie",100);
	print(p);
}

int main() {
	test();
	system("pause");

	return 0;
}

