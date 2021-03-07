#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	//정수형 배열을 동적 할당으로 10개를 선언한뒤
	//int* arr = (int*)malloc(sizeof(int) * 10);
	int* arr = new int[10];
	int total = 0;
	//숫자를 입력하고 해당 총합을 출력
	for (int i = 0; i < 10; i++) {
		cout << "숫자 입력 : "; cin >> arr[i];
		total += arr[i];
	}
	cout << "입력하신 숫자들의 총합 : " << total << endl;
	//free(arr);//동적할당한 메모리 해제
	delete[] arr;//new로 동적할당한 메모리 해제
	return 0;
}