#include <iostream>
using namespace std;
class Number {
private:
	static int num;
	int t;
public:
	void AddNumber() {
		//static이 선언이 안된부분에서는 이미 static 메모리가 할당되어있는 상태
		//static 선언된 부분에 접근이 가능
		num++;
	}
	static int GetNum() {
	//	static 선언 된 부분에서는 static 선언이 안된 변수나 함수에 접근할수 없음
	//	t++;
		return num;
	}
};
//static으로 선언된 변수 반드시 초기화
int Number::num = 0;
int main(void) {
	Number b;
	b.AddNumber(); b.AddNumber(); b.AddNumber();
	cout << Number::GetNum() << endl;
	cout << b.GetNum() << endl;
	return 0;
}




