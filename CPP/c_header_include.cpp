//문자열 입력 받은 후
//입력받은 문자열이 test이면 문자열이 일치합니다. 출력
//test가 아니면 문자열이 일치하지 않습니다. 출력
#include <iostream>
#include <cstring> //c언어에서 쓰던 헤더파일은 c파일명, .h 안씀

using namespace std;

int main(void) {
	char str[100];

	cout << "문자열 입력 : "; cin >> str;

	if (strcmp(str, "test") == 0)
		cout << "입력하신 문자열이 일치합니다." << endl;
	else
		cout << "입력하신 문자열이 일치하지 않습니다." << endl;

	return 0;
}