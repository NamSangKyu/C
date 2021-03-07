#include <iostream>
#include <stdlib.h>
using namespace std;
class Person {
public:
	Person() {
		cout << "Person이 생성되었습니다." << endl;
	}
	~Person() {
		cout << "Person이 소멸되었습니다." << endl;
	}
};

int main(void) {
	cout << "new로 동적할당한 경우" << endl;
	Person* arr1 = new Person[10];
	delete[] arr1;
	cout << "malloc으로 동적할당한 경우" << endl;
	Person* arr2 = (Person*)malloc(sizeof(Person) * 10);
	free(arr2);
	return 0;
}