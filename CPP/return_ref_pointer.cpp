#include <iostream>
using namespace std;
int& AddNumber(int& n) {
	n++;
	return n;
}

int main(void) {
	int num = 10;
	int& ref = AddNumber(num);

	cout << num << " " << ref << endl;
	cout << &num << " " << &ref << endl;
	cout << "--------------------------" << endl;
	//참조자로 리턴한다고 해서 꼭 참조자로 받을 필요는 없음
	//일반 변수면 그냥 값을 복사 받음
	int result = AddNumber(num);
	cout << num << " " << result << endl;
	cout << &num << " " << &result << endl;
	return 0;
}