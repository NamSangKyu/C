#include <iostream>

int main(void) {
	//인적사항 입력
	char name[30];
	int age;

	std::cout << "이름 입력 : "; //printf("이름 입력 : ");
	std::cin >> name;
	std::cout << "나이 입력 : ";
	std::cin >> age;

	std::cout << name << " , " << age << std::endl;

	return 0;
}