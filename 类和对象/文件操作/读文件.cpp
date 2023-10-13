#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test01() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << " open file fail" << endl;
	}
	////1
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}
	//2
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/
	////3
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}
	ifs.close();
}


int main() {
	test01();
	system("pause");
	return 0;
}

