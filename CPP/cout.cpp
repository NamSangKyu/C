#include <iostream>

int main(void) {
	std::cout << "Hello World 1" << std::endl;
	std::cout << "Hello World 2" << '\n';//std::endl == '\n'
	std::cout << "Hello World 3" << std::endl;
	std::cout << "�̸� : " << "ȫ�浿" << std::endl;
	std::cout << "���� : " << 20 << std::endl;
	//C++���ʹ� ���� ���� ��ġ�� ������� �߰��� �����ؼ� ���
	double area = 0.0;
	int r = 4;
	area = r * r * 3.1415;
	std::cout << "������ : " << area << std::endl;

	return 0;
}