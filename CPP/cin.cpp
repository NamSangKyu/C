#include <iostream>

int main(void) {
	//�������� �Է�
	char name[30];
	int age;

	std::cout << "�̸� �Է� : "; //printf("�̸� �Է� : ");
	std::cin >> name;
	std::cout << "���� �Է� : ";
	std::cin >> age;

	std::cout << name << " , " << age << std::endl;

	return 0;
}