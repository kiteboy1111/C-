#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
class Base {//fu
	T m;
};

class Son :public Base <int> {//zi��������������ʱ��Ҫָ����������T������

};

//��ģ��̳���ģ�� ,������T2ָ�������е�T����
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
//�ܽ���Ǹ�������ģ�壬������Ҫָ��������T����������