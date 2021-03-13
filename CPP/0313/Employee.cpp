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
	char* GetEno() { return eno; }
	void SetEno(char *e){ strcpy_s(eno, sizeof(eno), e); }
	void SetName(char *n){ strcpy_s(name, sizeof(name), n); }
	void SetDepartment(char *d){ 
		strcpy_s(department, sizeof(department), d); 
	}
	void SetPosition(int p) { position = p; }

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
Employee* arr[10];
int idx = 0;
void InsertEmployee() {
	//Employee �����͸� �ϳ� �Է¹޾Ƽ� arr�� �߰��ϴ� �κ�
	//���, �̸�, �μ�, ���� �Է� ó��
	char eno[10];
	char name[30];
	char department[30];
	int position;
	if (idx == 10) {
		cout << "���̻� ����� ������ �����ϴ�." << endl;
		return;
	}
	cout << "��� : "; cin >> eno;
	cout << "�̸� : "; cin >> name;
	cout << "�μ� : "; cin >> department;
	cout << "���� : "; cin >> position;
	arr[idx] = new Employee(eno, name, department, position);
	idx++;
}
//�˻�
Employee* SearchEmployee() {
	//��� �Է� �� �ش� �����͸� �˻�
	//1. ����� �Է�
	char eno[10];
	cout << "�˻��� ��� : "; cin >> eno;
	//2. �ݺ��� + strcmp �̿��ؼ� �ش� �����͸� ��ȸ
	for (int i = 0; i < idx; i++) {
		if (strcmp(eno, arr[i]->GetEno()) == 0) {
			arr[i]->PrintEmployeeInfo();
			return arr[i];
		}
	}
	return NULL;
}
//����
void UpdateEmployee() {
	//������ ������ �˻�
	Employee* r = SearchEmployee();
	if (r == NULL) return;
	//�����͸� �Է¹޾Ƽ� ����
	char temp[30];
	cout << "������ �̸� : "; cin >> temp; r->SetName(temp);
	cout << "������ �μ� : "; cin >> temp; r->SetDepartment(temp);
	int pos;
	cout << "������ ���� : "; cin >> pos; r->SetPosition(pos);
}
int main(void) {
	
	return 0;
}






