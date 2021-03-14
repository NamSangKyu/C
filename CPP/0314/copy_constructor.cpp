#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person(const char *n, int a) : age(a){
		//name�� �����Ҵ��� �� �ڿ� n�� ������ name�� ����
		name = new char[strlen(n)+1];
		strcpy_s(name,strlen(n)+1, n);
		cout << "Person(const char *, int)" << endl;
	}
	~Person() {
		delete[] name;
	}
	//���������
	Person(const Person& p) {
		name = new char[strlen(p.name)+1];
		strcpy_s(name, strlen(name) + 1, p.name);
		age = p.age;
		cout << "���� ������ ȣ��" << endl;
	}
	void SetName(const char* n) {
		strcpy_s(name, strlen(name) + 1, n);
	}
	void PrintPersonInfo() {
		cout << "�̸� : " << name << " , ���� : " << age << endl;
	}
};

int main(void) {
	Person p1("ȫ�浿", 20); //���� ���� �����ڰ� ȣ��
	p1.SetName("��ö��");
	p1.PrintPersonInfo();
	Person p2 = p1;//���� �����ڰ� ����
	p2.PrintPersonInfo();
	cout << &p1 << " , " << &p2 << endl;
	return 0;
}
