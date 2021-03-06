#include <stdio.h>
void BubbleSort(int* arr, int length);
void SelectSort(int* arr, int length);
void InsertSort();
void PrintAllArray(int* arr, int length);
void BubbleSort(int* arr, int length) {
	//���� ����
	int i, j;
	for (i = 0; i < length - 1; i++) { //pass
		for (j = 0; j < length - 1 - i; j++) {//���� ������ �����ϴ� �κ�
			if (arr[j] > arr[j + 1]) {
				//�տ� �ִ� ���� ũ�ϱ�, ��ȯ
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
	//�迭�� �ִ� ������ ���� ���, ���� ������ ����ϱ� ���� �Լ�
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void SelectSort(int* arr, int length) {
	//���� ���� ����
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
		//arr�� ���� ���
		/*PrintAllArray(arr, length);
		printf("\n");*/
	}
}
void InsertSort() {
	int arr[6];
	int i, j;
	for (i = 0; i < 6;i++ ) {
		//������ �Է�
		printf("%d��° ������ �Է� : ",i+1);
		scanf_s("%d", &arr[i]);
		//���������� ������ ����
		for (j = i; j > 0;j--) {
			if (arr[j] < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
		//�迭 ���� ���
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





