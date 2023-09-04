#include<iostream>
using namespace std;
void s1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void s2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void s3(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	s1(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	s2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	s3(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}

