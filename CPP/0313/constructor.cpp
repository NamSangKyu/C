#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	//�̸�, ���� ������ ����
	//Ŭ������ ������ ���� : �������
	char name[30];
	int age;
public:
	//������(Constructor : Ŭ������ ���� ����� ���� ���� ȣ��Ǵ� �Լ�)
	//      �Լ��� Ŭ������� ����, ���� Ÿ�� X
	Person() {
		cout << "Person Constructor" << endl;
	}
	Person(char* n, int a) {
		cout << "Person(char*,int) Constructor" << endl;
		strcpy_s(name, sizeof(name), n);
		age = a;
	}
	//Ŭ������ ������ �Լ� : ����Լ�
	//������ �ʱ�ȭ �ϴ� �Լ�, �̸� ���� ����ϴ� �Լ�
	void Init(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		age = a;
	}
	void PrintInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}


};
int main(void) {
	/*Person p;
	char name[] = "ȫ�浿";
	p.Init(name, 20);
	p.PrintInfo();
	Person p1(name, 20);
	p1.PrintInfo();*/
	Person arr[10]; //�迭 �����ϸ� �ش� ������ŭ �⺻ ������ ȣ��

	return 0;
}




