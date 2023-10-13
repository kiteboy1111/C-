#include<iostream>
using namespace std;
#include <fstream>
#include <string>
class Person {
public:
	char m_Name[64];
	int m_Age;
};
void test() {
	ofstream ofs("person.txt", ios::out | ios::binary);
	Person p = { "guigui",18 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
	ifstream ifs("person.txt", ios::out | ios::binary);
	if (!ifs.is_open()) {
		cout << "fail" << endl;

	}
	Person p1;
	ifs.read((char*)&p, sizeof(p));
	cout << p.m_Name << p.m_Age << endl;
}


int main() {
	test();
	system("pause");
	return 0;
}

