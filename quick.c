#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void PrintAllArray(int* arr, int length) {
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void QuickSort(int* arr, int left, int right) {
	int pl = left;
	int pr = right;
	int x = arr[(pl + pr) / 2];
	do {
		while (arr[pl] < x) pl++;
		while (arr[pr] > x) pr--;
		if (pl <= pr) {
			int temp = arr[pl];
			arr[pl] = arr[pr];
			arr[pr] = temp;
			pr--;
			pl++;
		}
	} while (pl <= pr);
	if(left < pr) QuickSort(arr, left, pr);
	if(right > pl) QuickSort(arr, pl, right);
}
int main(void){
	int size = 100000;
	int* arr = (int*)malloc(sizeof(int) * size);
	int i;
	srand((unsigned int)time(0));

	for (i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
	QuickSort(arr, 0, size-1);
	PrintAllArray(arr, size);
}
