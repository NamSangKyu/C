#include <stdio.h>
void BubbleSort(int* arr, int length);
void SelectSort(int* arr, int length);
void InsertSort();
void PrintAllArray(int* arr, int length);
void BubbleSort(int* arr, int length) {
	//정렬 수행
	int i, j;
	for (i = 0; i < length - 1; i++) { //pass
		for (j = 0; j < length - 1 - i; j++) {//실제 정렬을 수행하는 부분
			if (arr[j] > arr[j + 1]) {
				//앞에 있는 값이 크니까, 교환
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		/*printf("%d pass :", i + 1);
		PrintAllArray(arr, length);*/
	}
}
void PrintAllArray(int* arr, int length) {
	//배열에 있는 내용을 전부 출력, 정렬 과정을 출력하기 위한 함수
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void SelectSort(int* arr, int length) {
	//선택 정렬 구현
	int i, j;
	for (i = 0; i < length - 1; i++) {
		//printf("%d pass : ", i+1);
		for (j = i + 1; j < length; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		//arr의 내용 출력
		/*PrintAllArray(arr, length);
		printf("\n");*/
	}
}
void InsertSort() {
	int arr[6];
	int i, j;
	for (i = 0; i < 6;i++ ) {
		//데이터 입력
		printf("%d번째 데이터 입력 : ",i+1);
		scanf_s("%d", &arr[i]);
		//버블정렬을 역으로 수행
		for (j = i; j > 0;j--) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
		//배열 내용 출력
		PrintAllArray(arr, i + 1);
	}
}
/*
int main(void) {
	int arr1[] = { 8,4,6,9,7,1 };
	int arr2[] = { 8,4,6,9,7,1 };
	//BubbleSort(arr1, sizeof(arr1) / sizeof(int));
	//SelectSort(arr2, sizeof(arr2) / sizeof(int));
	InsertSort();
	return 0;
}

*/
int main(void) {
	int size = 100000;
	int* arr = (int*)malloc(sizeof(int) * size);
	int i;
	srand((unsigned int)time(0));

	for (i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
	//BubbleSort(arr, size);
	SelectSort(arr, size);
	PrintAllArray(arr, size);
}





