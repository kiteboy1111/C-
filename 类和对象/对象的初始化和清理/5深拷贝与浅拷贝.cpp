#include<iostream>
using namespace std;
class Person {
public:
	Person() {
		cout << "wu can" << endl;
	}
	Person(int age, int height) {
		m_age = age;
		m_height = new int(height);
	}
	Person(const Person& p) {
		cout << "kaobei" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);//�ڶ����������ڴ�
	}
	~Person() {
		cout << "xi gou" << endl;
		if (m_height != NULL) {
			delete m_height;
		}
	}

public:
	int m_age;
	int* m_height;
};
void test01() {
	Person p1(18,180);
	Person p2(p1);
	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;

	cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
}
int main() {

	test01();
	system("pause");
	return 0;
}

