#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char* name;
	int age;
public:
	Person(const char *n, int a) : age(a){
		//name에 동적할당을 한 뒤에 n의 내용을 name에 복사
		name = new char[strlen(n)+1];
		strcpy_s(name,strlen(n)+1, n);
		cout << "Person(const char *, int)" << endl;
	}
	~Person() {
		delete[] name;
	}
	//복사생성자
	Person(const Person& p) {
		name = new char[strlen(p.name)+1];
		strcpy_s(name, strlen(name) + 1, p.name);
		age = p.age;
		cout << "복사 생성자 호출" << endl;
	}
	void SetName(const char* n) {
		strcpy_s(name, strlen(name) + 1, n);
	}
	void PrintPersonInfo() {
		cout << "이름 : " << name << " , 나이 : " << age << endl;
	}
};

int main(void) {
	Person p1("홍길동", 20); //원래 만든 생성자가 호출
	p1.SetName("김철수");
	p1.PrintPersonInfo();
	Person p2 = p1;//복사 생성자가 실행
	p2.PrintPersonInfo();
	cout << &p1 << " , " << &p2 << endl;
	return 0;
}
