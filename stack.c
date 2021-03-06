#include <stdio.h>
#include <stdlib.h>

int *stack;
int top;
int size;
//������ �߰�
void push() {
	int data;
	//top�̶� size ��
	if (top == size) {
	//	top == size �ش� �Լ� �ߴ�
		printf("stack is full\n");
		return;
	}
	//  ������ �Է¹޾Ƽ� stack�� �߰� �� top ����
	printf("push data : ");
	scanf_s("%d", &data);
	stack[top++] = data;
}
//�����͸� ����
void pop() {
	//top ��ġ üũ
	if (top == 0) {
		printf("stack is empty\n");
		return;
	}
	//top ��ġ�� �ϳ� �����ϰ� �����͸� ���� --> ���� ������ ���
	printf("pop : %d\n",stack[--top]);
}

int main(void) {
	int no;
	//stack size ����
	printf("���� ũ�� �Է� : ");
	scanf_s("%d", &size);
	//statck malloc���� �ʱ�ȭ
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