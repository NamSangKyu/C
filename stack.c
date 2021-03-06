#include <stdio.h>
#include <stdlib.h>

int *stack;
int top;
int size;
//데이터 추가
void push() {
	int data;
	//top이랑 size 비교
	if (top == size) {
	//	top == size 해당 함수 중단
		printf("stack is full\n");
		return;
	}
	//  데이터 입력받아서 stack에 추가 후 top 증가
	printf("push data : ");
	scanf_s("%d", &data);
	stack[top++] = data;
}
//데이터를 뽑음
void pop() {
	//top 위치 체크
	if (top == 0) {
		printf("stack is empty\n");
		return;
	}
	//top 위치를 하나 감소하고 데이터를 뽑음 --> 뽑은 데이터 출력
	printf("pop : %d\n",stack[--top]);
}

int main(void) {
	int no;
	//stack size 받음
	printf("스택 크기 입력 : ");
	scanf_s("%d", &size);
	//statck malloc으로 초기화
	stack = (int*)malloc(sizeof(int) * size);
	while (1) {
		printf("1. Data Push\n");
		printf("2. Data Pop\n");
		printf("0. Exit\n");
		printf("input number : ");
		scanf_s("%d",&no);
		if (no == 1)
			push();
		else if (no == 2)
			pop();
		else
			break;
	}
	return 0;
}