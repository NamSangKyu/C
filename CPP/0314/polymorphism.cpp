#include <iostream>
using namespace std;
//다형성 : 하나의 함수로 여러가지 일을 할 수 있음
//순수 가상함수가 있는 클래스 ---> 추상클래스
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
	//가상함수
	/*virtual void eat() {
		cout << "동물이 먹이를 먹습니다" << endl;
	}*/
	//순수 가상 함수 ---> 추상화
	virtual void eat() = 0;
	void PrintAnimal() {
		cout << "이 동물의 나이 : " << age << endl;
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
		cout << "사람이 밥을 먹습니다." << endl;
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
		cout << "개가 사료를 먹습니다." << endl;
	}
};
class Cat : public Animal {
public:
	Cat(int a) : Animal(a) {}
};
//is a 관계 
// 자식 클래스는 부모 클래스로 형변환 할수 있음
void eat(Animal *ptr) {
	ptr->eat();
}

int main(void) {
	//추상클래스는 직접적으로 생성이 안됨
	//Animal a(20);
	//추상클래스에서 물려받은 순수 가상함수를 오버라이딩을 안하면 추상클래스화 된다.
	//Cat c(20);
	Dog d(19);
	Person p(40);
	//eat(&a);
	eat(&d);
	eat(&p);
	return 0;
}