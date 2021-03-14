#include <iostream>
using namespace std;
//상속 : 클래스가 다른 클래스에게 자기 가지고 있는 멤버변수, 멤버함수를 물려줌
// <<코드의 재사용을 목적>>
//자식 클래스가 생성이 될려면 부모 클래스가 먼저 생성이 되야함
class Animal {
	//접근 제어자 protected 자식클래스 까지 접근이 가능
protected:
	int age;
public:
	//부모클래스에서 멤버변수를 초기화할려면 자식 클래스 생성자에서 값을 받아서 부모 생성자로 전달을 해줘야 됨
	Animal(int age) {
		cout << "Animal Constructor" << endl;
		//this 자기 자신 객체를 가리키는 포인터
		this->age = age;
	}
	~Animal() {
		cout << "Animal Deconstructor" << endl;
	}
	void eat() {
		cout << "동물이 먹이를 먹습니다" << endl;
	}
	void PrintAnimal() {
		cout << "이 동물의 나이 : " << age << endl;
	}

};
//      : 접근제어자 부모클래스{   <<-- 하나의 클래스를 상속받는 방법
class Person : public Animal {
public:
	//부모클래스 생성에 필요한 값을 자식 생성자가 받아서 이니셜라이저로 부모생성자 호출
	Person(int age) : Animal(age){
		cout << "Person Constructor" << endl;
	}
	~Person() {
		cout << "Person Deconstructor" << endl;
	}
	//오버라이딩
	void eat() {
		cout << "사람이 밥을 먹습니다." << endl;
	}
};
//Dog 클래스는 Animal 클래스를 상속받는 클래스 작성
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
		//부모가 가지고 있는 eat
		Animal::eat();
		cout << "개가 사료를 먹습니다." << endl;
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