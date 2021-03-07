#include <iostream>

int main(void) {
	std::cout << "Hello World 1" << std::endl;
	std::cout << "Hello World 2" << '\n';//std::endl == '\n'
	std::cout << "Hello World 3" << std::endl;
	std::cout << "이름 : " << "홍길동" << std::endl;
	std::cout << "나이 : " << 20 << std::endl;
	//C++부터는 변수 선언 위치에 상관없이 중간에 선언해서 사용
	double area = 0.0;
	int r = 4;
	area = r * r * 3.1415;
	std::cout << "원넓이 : " << area << std::endl;

	return 0;
}