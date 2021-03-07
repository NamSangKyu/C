#include <iostream>
//cout, cin, endl을 더이상 std::을 사용하지 않게끔 using 이용해서 추가
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;
namespace AREA1 {
	void PrintNumber(int no) {
		cout << "PrintNumber - AREA1 " << no << endl;
	}
}
namespace AREA2 {
	void PrintNumber(int no) {
		std::cout << "PrintNumber - AREA2 " << no << std::endl;
	}
}
using AREA1::PrintNumber;
int main(void) {
	PrintNumber(10);
	AREA2::PrintNumber(10);
	return 0;
}
