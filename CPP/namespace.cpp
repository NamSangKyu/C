/*
	namespace : 작성 소스코드에서 작업 영역을 구분해 주는 문법
*/
#include <iostream>

namespace AREA1 {
	void PrintNumber(int no) {
		std::cout << "PrintNumber - AREA1 " << no << std::endl;
	}
}
namespace AREA2 {
	void PrintNumber(int no) {
		std::cout << "PrintNumber - AREA2 " << no << std::endl;
	}
}
int main(void) {
	AREA1::PrintNumber(10);
	AREA2::PrintNumber(10);
	return 0;
}
