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
		std::cout << "�� ���ڴ� ¦���Դϴ�." << std::endl;
	else
		std::cout << "�� ���ڴ� Ȧ���Դϴ�." << std::endl;
	return 0;
}