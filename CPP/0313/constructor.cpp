#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	//이름, 나이 저장할 변수
	//클래스에 선언한 변수 : 멤버변수
	char name[30];
	int age;
public:
	//생성자(Constructor : 클래스로 변수 선언시 제일 먼저 호출되는 함수)
	//      함수명 클래스명과 동일, 리턴 타입 X
	Person() {
		cout << "Person Constructor" << endl;
	}
	Person(char* n, int a) {
		cout << "Person(char*,int) Constructor" << endl;
		strcpy_s(name, sizeof(name), n);
		age = a;
	}
	//클래스에 선언한 함수 : 멤버함수
	//데이터 초기화 하는 함수, 이름 나이 출력하는 함수
	void Init(char* n, int a) {
		strcpy_s(name, sizeof(name), n);
		age = a;
	}
	void PrintInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}


};
int main(void) {
	/*Person p;
	char name[] = "홍길동";
	p.Init(name, 20);
	p.PrintInfo();
	Person p1(name, 20);
	p1.PrintInfo();*/
	Person arr[10]; //배열 선언하면 해당 개수만큼 기본 생성자 호출

	return 0;
}




