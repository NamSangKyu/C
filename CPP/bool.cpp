#include <iostream>
bool IsEven(int num) {
	return num % 2 == 0;
}
int main(void) {
	//bool type, true, false
	bool flag = true;
	std::cout << flag << std::endl;
	flag = false;
	std::cout << flag << std::endl;

	if (IsEven(30))
		std::cout << "이 숫자는 짝수입니다." << std::endl;
	else
		std::cout << "이 숫자는 홀수입니다." << std::endl;
	return 0;
}