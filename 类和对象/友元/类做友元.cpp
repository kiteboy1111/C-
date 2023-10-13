#include <iostream>
using namespace std;
class Building;

class goodGay {
public:
	goodGay();
	void visit();
private:
	Building* building;
};



class Building {
	friend class goodGay;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building() {
	this->m_SittingRoom = "keting";
	this->m_BedRoom = "woshi";
}

goodGay::goodGay() {
	building = new Building;
}
void goodGay::visit() {
	cout << "hao ji you " << building->m_SittingRoom << endl;
	cout << "hao ji you " << building->m_BedRoom << endl;

}
void test01()
{
	goodGay gg;
	gg.visit();

}

int main() {
	test01();
	system("pause");
	return 0;
}

