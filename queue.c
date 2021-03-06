#include <stdio.h>
#define QUEUE_SIZE 7
void PrintSchedule();
void AddSchedule();
void RunSchedule();
int queue[QUEUE_SIZE];
int front, rear;
//enque --> ť�� ������ ���
void AddSchedule() {
	//ť�� ���� ������ �ִ��� üũ
	if ((rear + 1) % QUEUE_SIZE == front) {
		printf("ť�� ������ �ֽ��ϴ�.\n");
		return;
	}
	//�����͸� �Է��� ����
	//rear ��ġ�� �Է� ���� �����͸� �߰�
	printf("������ �� �Է� : ");
	scanf_s("%d", &queue[rear]);
	//rear ��ġ�� ���� ��ġ�� �̵�
	rear = (rear + 1) % QUEUE_SIZE;
	//PrintSchedule�� ���� ť ���� ���
	PrintSchedule();
}
//deque --> ť�� �����͸� ����
void RunSchedule() {
	//ť�� ���� ���� �ִ��� üũ
	if (front == rear) {
		printf("�����ٿ� ���� �����ϴ�.\n");
		return;
	}
	//������ �̾Ƽ� ���
	printf("������ ���� : %d\n", queue[front]);
	queue[front] = 0;
	//front�� ���� ��ġ�� �̵�
	front = (front + 1) % QUEUE_SIZE;
	PrintSchedule();
}
//��ü ������ ������ ���
void PrintSchedule() {
	int i;
	for (i = 0; i < QUEUE_SIZE; i++) {
		printf("%d ", queue[i]);
	}
	printf("front : %d, rear : %d\n", front, rear);
}
int main(void) {
	/*
		1. ������ �߰�
		2. ������ ����
		0. ���α׷� ����
		�޴� ��ȣ�� �Է��ϼ��� : 
	*/
	int no = -1;

	while (no != 0) {
		printf("1. ������ �߰�\n");
		printf("2. ������ ����\n");
		printf("0. ���α׷� ����\n");
		printf("�޴� ��ȣ�� �Է��ϼ��� : ");
		scanf_s("%d",&no);
		switch (no) {
		case 1:
			AddSchedule();
			break;
		case 2:
			RunSchedule();
			break;
		}
	}
	return 0;
}