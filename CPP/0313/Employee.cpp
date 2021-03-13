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
	char* GetEno() { return eno; }
	void SetEno(char *e){ strcpy_s(eno, sizeof(eno), e); }
	void SetName(char *n){ strcpy_s(name, sizeof(name), n); }
	void SetDepartment(char *d){ 
		strcpy_s(department, sizeof(department), d); 
	}
	void SetPosition(int p) { position = p; }

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
Employee* arr[10];
int idx = 0;
void InsertEmployee() {
	//Employee 데이터를 하나 입력받아서 arr에 추가하는 부분
	//사번, 이름, 부서, 직급 입력 처리
	char eno[10];
	char name[30];
	char department[30];
	int position;
	if (idx == 10) {
		cout << "더이상 저장될 공간이 없습니다." << endl;
		return;
	}
	cout << "사번 : "; cin >> eno;
	cout << "이름 : "; cin >> name;
	cout << "부서 : "; cin >> department;
	cout << "직급 : "; cin >> position;
	arr[idx] = new Employee(eno, name, department, position);
	idx++;
}
//검색
Employee* SearchEmployee() {
	//사번 입력 후 해당 데이터를 검색
	//1. 사번을 입력
	char eno[10];
	cout << "검색할 사번 : "; cin >> eno;
	//2. 반복문 + strcmp 이용해서 해당 데이터를 조회
	for (int i = 0; i < idx; i++) {
		if (strcmp(eno, arr[i]->GetEno()) == 0) {
			arr[i]->PrintEmployeeInfo();
			return arr[i];
		}
	}
	return NULL;
}
//수정
void UpdateEmployee() {
	//수정할 데이터 검색
	Employee* r = SearchEmployee();
	if (r == NULL) return;
	//데이터를 입력받아서 수정
	char temp[30];
	cout << "수정할 이름 : "; cin >> temp; r->SetName(temp);
	cout << "수정할 부서 : "; cin >> temp; r->SetDepartment(temp);
	int pos;
	cout << "수정할 직급 : "; cin >> pos; r->SetPosition(pos);
}
int main(void) {
	
	return 0;
}






