#include <iostream>
#include <cstring>
using namespace std;
const char* pList[] = { "���","����","�븮","����","����","����" };
class Employee {
private:
	char eno[10];//���
	char name[30];//�̸�
	char department[30];//�μ�
	int position;//����

public:
	//������
	Employee(char *e, char *n, char *d, int p) {
		strcpy_s(eno, sizeof(eno), e);
		strcpy_s(name, sizeof(name), n);
		strcpy_s(department, sizeof(department), d);
		position = p;
	}
	const char* ReturnPosition() {
		return pList[position-1];
	}
	
	//���
	void PrintEmployeeInfo() {
		cout << "��� : " << eno << endl;
		cout << "�̸� : " << name << endl;
		cout << "�μ� : " << department << endl;
		cout << "���� : " << ReturnPosition() << endl;
	}
};


int main(void) {
	char eno[10] = "A0001";
	char name[30] = "ȫ�浿";
	char department[30] = "�濵������";
	Employee p(eno, name, department, 4);
	p.PrintEmployeeInfo();

	return 0;
}