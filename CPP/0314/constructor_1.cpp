#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;
	int age;
	const int GRADE;
public:
	//Initailizer 멤버 변수를 초기화하는 방법(변수, 상수, 참조자)
	//생성자(매개변수) : 멤버변수(매개변수), ...{  
	Person(string n, int a, int g) : GRADE(g), age(a) {
		name = n;
		cout << "Person(string, int, int)" << endl;
	}
	void PrintPersonInfo() {
		cout << "이름 : " << name << " , 나이 : " << age << endl;
	}
};

int main(void) {
	Person p1("홍길동", 20, 2); //원래 만든 생성자가 호출
	p1.PrintPersonInfo();
	Person p2 = p1;//복사 생성자가 실행
	p2.PrintPersonInfo();
	cout << &p1 << " , " << &p2 << endl;
	return 0;
}
