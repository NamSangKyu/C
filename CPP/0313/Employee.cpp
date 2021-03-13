#include <iostream>
#include <cstring>
using namespace std;
const char* pList[] = { "사원","주임","대리","과장","차장","부장" };
class Employee {
private:
	char eno[10];//사번
	char name[30];//이름
	char department[30];//부서
	int position;//직급

public:
	//생성자
	Employee(char *e, char *n, char *d, int p) {
		strcpy_s(eno, sizeof(eno), e);
		strcpy_s(name, sizeof(name), n);
		strcpy_s(department, sizeof(department), d);
		position = p;
	}
	const char* ReturnPosition() {
		return pList[position-1];
	}
	
	//출력
	void PrintEmployeeInfo() {
		cout << "사번 : " << eno << endl;
		cout << "이름 : " << name << endl;
		cout << "부서 : " << department << endl;
		cout << "직급 : " << ReturnPosition() << endl;
	}
};


int main(void) {
	char eno[10] = "A0001";
	char name[30] = "홍길동";
	char department[30] = "경영지원팀";
	Employee p(eno, name, department, 4);
	p.PrintEmployeeInfo();

	return 0;
}