#include <iostream>
using namespace std;
//��� : Ŭ������ �ٸ� Ŭ�������� �ڱ� ������ �ִ� �������, ����Լ��� ������
// <<�ڵ��� ������ ����>>
//�ڽ� Ŭ������ ������ �ɷ��� �θ� Ŭ������ ���� ������ �Ǿ���
class Animal {
	//���� ������ protected �ڽ�Ŭ���� ���� ������ ����
protected:
	int age;
public:
	//�θ�Ŭ�������� ��������� �ʱ�ȭ�ҷ��� �ڽ� Ŭ���� �����ڿ��� ���� �޾Ƽ� �θ� �����ڷ� ������ ����� ��
	Animal(int age) {
		cout << "Animal Constructor" << endl;
		//this �ڱ� �ڽ� ��ü�� ����Ű�� ������
		this->age = age;
	}
	~Animal() {
		cout << "Animal Deconstructor" << endl;
	}
	void eat() {
		cout << "������ ���̸� �Խ��ϴ�" << endl;
	}
	void PrintAnimal() {
		cout << "�� ������ ���� : " << age << endl;
	}

};
//      : ���������� �θ�Ŭ����{   <<-- �ϳ��� Ŭ������ ��ӹ޴� ���
class Person : public Animal {
public:
	//�θ�Ŭ���� ������ �ʿ��� ���� �ڽ� �����ڰ� �޾Ƽ� �̴ϼȶ������� �θ������ ȣ��
	Person(int age) : Animal(age){
		cout << "Person Constructor" << endl;
	}
	~Person() {
		cout << "Person Deconstructor" << endl;
	}
	//�������̵�
	void eat() {
		cout << "����� ���� �Խ��ϴ�." << endl;
	}
};
//Dog Ŭ������ Animal Ŭ������ ��ӹ޴� Ŭ���� �ۼ�
class Dog : public Animal {
public:
	Dog(int age) : Animal(age) {
		cout << "Dog Constructor" << endl;
	}
	~Dog() {
		cout << "Dog Deconstructor" << endl;
	}
	void eat() {
		age++;
		//�θ� ������ �ִ� eat
		Animal::eat();
		cout << "���� ��Ḧ �Խ��ϴ�." << endl;
	}
};
int main(void) {
	Animal a(20);
	a.eat();
	a.PrintAnimal();
	Person p(20);
	p.eat();
	p.PrintAnimal();
	Dog d(20);
	d.eat();
	d.PrintAnimal();
	return 0;
}