#include <iostream>
using namespace std;
struct Person {
	char name[30];
	int age;
	//Person의 구성요소 중 하나로 함수를 넣음
	//Person 하나를 매개변수로 받아서 데이터를 입력해주는 함수
	void InputPerson() {
		cout << "이름 입력 : "; cin >> name;
		cout << "나이 입력 : "; cin >> age;
	}
	//Person 정보 하나를 매개변수로 받아서 Person에 내용을 출력하는 함수
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

