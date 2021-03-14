#include <iostream>
using namespace std;
//������ : �ϳ��� �Լ��� �������� ���� �� �� ����
//���� �����Լ��� �ִ� Ŭ���� ---> �߻�Ŭ����
class Animal {
protected:
	int age;
public:
	Animal(int age) {
		cout << "Animal Constructor" << endl;
		this->age = age;
	}
	~Animal() {
		cout << "Animal Deconstructor" << endl;
	}
	//�����Լ�
	/*virtual void eat() {
		cout << "������ ���̸� �Խ��ϴ�" << endl;
	}*/
	//���� ���� �Լ� ---> �߻�ȭ
	virtual void eat() = 0;
	void PrintAnimal() {
		cout << "�� ������ ���� : " << age << endl;
	}

};
class Person : public Animal {
public:
	Person(int age) : Animal(age) {
		cout << "Person Constructor" << endl;
	}
	~Person() {
		cout << "Person Deconstructor" << endl;
	}
	void eat() {
		cout << "����� ���� �Խ��ϴ�." << endl;
	}
};
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
		//Animal::eat();
		cout << "���� ��Ḧ �Խ��ϴ�." << endl;
	}
};
class Cat : public Animal {
public:
	Cat(int a) : Animal(a) {}
};
//is a ���� 
// �ڽ� Ŭ������ �θ� Ŭ������ ����ȯ �Ҽ� ����
void eat(Animal *ptr) {
	ptr->eat();
}

int main(void) {
	//�߻�Ŭ������ ���������� ������ �ȵ�
	//Animal a(20);
	//�߻�Ŭ�������� �������� ���� �����Լ��� �������̵��� ���ϸ� �߻�Ŭ����ȭ �ȴ�.
	//Cat c(20);
	Dog d(19);
	Person p(40);
	//eat(&a);
	eat(&d);
	eat(&p);
	return 0;
}