#include <iostream>
#include <stdlib.h>
using namespace std;
class Person {
public:
	Person() {
		cout << "Person�� �����Ǿ����ϴ�." << endl;
	}
	~Person() {
		cout << "Person�� �Ҹ�Ǿ����ϴ�." << endl;
	}
};

int main(void) {
	cout << "new�� �����Ҵ��� ���" << endl;
	Person* arr1 = new Person[10];
	delete[] arr1;
	cout << "malloc���� �����Ҵ��� ���" << endl;
	Person* arr2 = (Person*)malloc(sizeof(Person) * 10);
	free(arr2);
	return 0;
}