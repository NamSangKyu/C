#include <iostream>
using namespace std;
//참조자 : 기존 변수에 이름을 하나 이상 더 붙여서 사용하는 방법
//         포인터 효과를 주지만 사용하는건 일반 변수처럼 사용
//		   선언시 반드시 기존 변수로 초기화를 해야됨
int main(void) {
	int num = 10;
	//참조자
	int& ref = num;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	num++;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	ref++;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	return 0;
}