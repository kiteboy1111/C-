#include<iostream>
using namespace std;
class Building {
	friend void goodGay(Building* building);
public:
	Building() {
		this->m_SittingRoom = "øÕÃ¸";
		this->m_BedRoom = "Œ‘ “";
	}
public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGay(Building* building)
{
	cout << "hao ji you zai fang wen" << building->m_SittingRoom << endl;
	cout << "haojiyouzaifangwen" << building->m_BedRoom << endl;
}
void test01() {
	Building b;
	goodGay(&b);
}
int main() {
	test01();
	system("pause");
	return 0;
}

