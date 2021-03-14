#include <iostream>
#include <cstring>
using namespace std;
//�ڵ��� Ŭ����
class Car {
private:
// ������� : �𵨸�, ��Ϲ�ȣ, �ӵ� 
	char* model;
	char* no;
	int speed;
//	 ��� : �ִ�ӵ�
	const int MAX_SPEED;
public:
// ����Լ�
//		��������� �ʱ�ȭ�ϴ� ������
	Car(const char* m, const char* n, int s, int mx) :speed(s), MAX_SPEED(mx) {
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		no = new char[strlen(n) + 1];
		strcpy_s(no, strlen(n) + 1, n);
	}
//		�ڵ��� ���� ��� �Լ�
	void PrintCarInfo() {
		cout << "�𵨸� : " << model << endl;
		cout << "��Ϲ�ȣ : " << no << endl;
		cout << "����ӵ� : " << speed << endl;
		cout << "�ִ�ӵ� : " << MAX_SPEED << endl;
	}
//      �ӵ��� ������Ű�� �Լ�
	void Accelator() {
		if (speed + 13 > MAX_SPEED)
			speed = MAX_SPEED;
		else
			speed += 13;
		cout << "����ӵ� : " << speed << endl;
	}
//		�ӵ��� ���� ��Ű�� �Լ�
	void Break() {
		if (speed - 10 < 0)
			speed = 0;
		else
			speed -= 10;
		cout << "����ӵ� : " << speed << endl;
	}
};



int main(void) {
	Car c("�ƹݶ�", "12313FFF", 190, 200);
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.PrintCarInfo();

	return 0;
}