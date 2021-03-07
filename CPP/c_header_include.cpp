//문자열 입력 받은 후
//입력받은 문자열이 test이면 문자열이 일치합니다. 출력
//test가 아니면 문자열이 일치하지 않습니다. 출력
#include <iostream>
#include <string.h>

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