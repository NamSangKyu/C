#include <iostream>
using namespace std;
struct Person {
	char name[30];
	int age;
	//Person�� ������� �� �ϳ��� �Լ��� ����
	//Person �ϳ��� �Ű������� �޾Ƽ� �����͸� �Է����ִ� �Լ�
	void InputPerson() {
		cout << "�̸� �Է� : "; cin >> name;
		cout << "���� �Է� : "; cin >> age;
	}
	//Person ���� �ϳ��� �Ű������� �޾Ƽ� Person�� ������ ����ϴ� �Լ�
	void PrintPerson() {
		cout << name << " , " << age << endl;
	}
};

int main(void) {
	Person p;
	p.InputPerson();
	p.PrintPerson();
	Person s;
	s.InputPerson();
	s.PrintPerson();
	return 0;
}

