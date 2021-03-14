#include <iostream>
#include <cstring>
using namespace std;
//자동차 클래스
class Car {
private:
// 멤버변수 : 모델명, 등록번호, 속도 
	char* model;
	char* no;
	int speed;
//	 상수 : 최대속도
	const int MAX_SPEED;
public:
// 멤버함수
//		멤버변수를 초기화하는 생성자
	Car(const char* m, const char* n, int s, int mx) :speed(s), MAX_SPEED(mx) {
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		no = new char[strlen(n) + 1];
		strcpy_s(no, strlen(n) + 1, n);
	}
//		자동차 정보 출력 함수
	void PrintCarInfo() {
		cout << "모델명 : " << model << endl;
		cout << "등록번호 : " << no << endl;
		cout << "현재속도 : " << speed << endl;
		cout << "최대속도 : " << MAX_SPEED << endl;
	}
//      속도를 증가시키는 함수
	void Accelator() {
		if (speed + 13 > MAX_SPEED)
			speed = MAX_SPEED;
		else
			speed += 13;
		cout << "현재속도 : " << speed << endl;
	}
//		속도를 감소 시키는 함수
	void Break() {
		if (speed - 10 < 0)
			speed = 0;
		else
			speed -= 10;
		cout << "현재속도 : " << speed << endl;
	}
};



int main(void) {
	Car c("아반떼", "12313FFF", 190, 200);
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Accelator();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.Break();
	c.PrintCarInfo();

	return 0;
}