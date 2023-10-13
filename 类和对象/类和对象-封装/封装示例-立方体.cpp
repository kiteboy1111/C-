#include<iostream>
#include<string>
using namespace std;
//�����������(Cube)

//������������������

//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
class Cube {
public:
	//��������û�ȡ
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H= h;
	}
	int getH() {
		return m_H;
	}
	//���������������
	int calculateS() {
		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
	}
	int calculateV() {
		return m_L * m_H * m_W;
	}
	//��Ա����
	bool isSameByclass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		else
			return false;
	}
	

	//˽�г����
private:
	int m_L;
	int m_W;
	int m_H;
};
//ȫ�ֺ���
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	else
		return false;

}

int main() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
	cout << "c1�����Ϊ�� " << c1.calculateV () << endl;
	Cube c2;
	c2.setL(11);
	c2.setW(10);
	c2.setH(10);
	if (isSame(c1, c2)) {
		cout << "�������������" << endl;
	}
	else {
		cout << "���������岻���" << endl;
	}
	if (c1.isSameByclass(c2)) {
		cout << "�������������" << endl;
	}
	else {
		cout << "���������岻���" << endl;
	}
	system("pause");
	return 0;
}