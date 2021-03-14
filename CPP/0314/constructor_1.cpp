#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;
	int age;
	const int GRADE;
public:
	//Initailizer ��� ������ �ʱ�ȭ�ϴ� ���(����, ���, ������)
	//������(�Ű�����) : �������(�Ű�����), ...{  
	Person(string n, int a, int g) : GRADE(g), age(a) {
		name = n;
		cout << "Person(string, int, int)" << endl;
	}
	void PrintPersonInfo() {
		cout << "�̸� : " << name << " , ���� : " << age << endl;
	}
};

int main(void) {
	Person p1("ȫ�浿", 20, 2); //���� ���� �����ڰ� ȣ��
	p1.PrintPersonInfo();
	Person p2 = p1;//���� �����ڰ� ����
	p2.PrintPersonInfo();
	cout << &p1 << " , " << &p2 << endl;
	return 0;
}
