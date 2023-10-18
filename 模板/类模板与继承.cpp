#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
class Base {//fu
	T m;
};

class Son :public Base <int> {//zi，子类在声明的时候，要指定出父类中T的类型

};

//类模板继承类模板 ,可以用T2指定父类中的T类型
template <class T1,class T2>
class Son2 :public Base<T2>{
public:
	Son2() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}

};



void test01() {

}
void test02() {
	Son2<int, char>child1;
}

int main() {

	test01();

	test02();

	system("pause");

	return 0;
}
//总结就是父类是类模板，子类需要指出父类中T的数据类型