#include<iostream>
using namespace std;
template <typename T>//ģ���﷨ typename���Ի���class
void mySwap(T&a,T&b) {
	T temp = a;
	a = b;
	b = temp;

}

void test() {
	int a = 10, b = 20;
	float c = 10, d = 20;
	//�Զ�
	mySwap(a, b);
	mySwap(c, d);
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	//ȷ��

	mySwap<int>(a, b);
	mySwap<float>(c, d);
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

}

int main() {
	test();
	system("pause");
	return 0;
}

