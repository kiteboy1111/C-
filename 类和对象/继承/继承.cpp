#include<iostream>
using namespace std;

class BassPage {
public:
	void header() {
		cout<< "life study job" << endl;
	}
};
class GUI : public BassPage
{
public:
	void con() {
		cout << "GG Gue" << endl;
	}
};

class Li : public BassPage
{public:
	void coooot() {
		cout << " Bruce Lee" << endl;
	}
};
void test01() {
	GUI gui;
	gui.header();
	gui.con();
	Li li;
	li.header();
	li.coooot();
}
int main() {
	test01();

	system("pause");
	return 0;
}

