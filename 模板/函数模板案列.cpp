#include<iostream>
using namespace std;

template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void mySort(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}

		}
		if (max != i) {

			mySwap(arr[max], arr[i]);
		}
	}
}
template<typename T>
void ptintArray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "";
	}

	cout << endl;
}

void test1() {
	char cArr[] = "defabc";
	int num = sizeof(cArr) / sizeof(char);
	mySort(cArr, num);
	ptintArray(cArr, num);
}
void test2() {
	int nArr[] = { 3,4,5,7,1,9 };
	int num = sizeof(nArr) / sizeof(int);
	mySort(nArr, num);
	ptintArray(nArr, num);
}

int main() {
	test1();
	test2();
	system("pause");
	return 0;
}