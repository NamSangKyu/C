#include <stdio.h>
#define QUEUE_SIZE 7
void PrintSchedule();
void AddSchedule();
void RunSchedule();
int queue[QUEUE_SIZE];
int front, rear;
//enque --> 큐에 데이터 등록
void AddSchedule() {
	//큐에 남은 공간이 있는지 체크
	if ((rear + 1) % QUEUE_SIZE == front) {
		printf("큐가 가득차 있습니다.\n");
		return;
	}
	//데이터를 입력을 받음
	//rear 위치에 입력 받은 데이터를 추가
	printf("스케줄 값 입력 : ");
	scanf_s("%d", &queue[rear]);
	//rear 위치를 다음 위치로 이동
	rear = (rear + 1) % QUEUE_SIZE;
	//PrintSchedule로 현재 큐 상태 출력
	PrintSchedule();
}
//deque --> 큐에 데이터를 뽑음
void RunSchedule() {
	//큐에 뽑을 값이 있는지 체크
	if (front == rear) {
		printf("스케줄에 값이 없습니다.\n");
		return;
	}
	//데이터 뽑아서 출력
	printf("스케줄 실행 : %d\n", queue[front]);
	queue[front] = 0;
	//front를 다음 위치로 이동
	front = (front + 1) % QUEUE_SIZE;
	PrintSchedule();
}
//전체 스케줄 내용을 출력
void PrintSchedule() {
	int i;
	for (i = 0; i < QUEUE_SIZE; i++) {
		printf("%d ", queue[i]);
	}
	printf("front : %d, rear : %d\n", front, rear);
}
int main(void) {
	/*
		1. 스케줄 추가
		2. 스케줄 실행
		0. 프로그램 종료
		메뉴 번호를 입력하세요 : 
	*/
	int no = -1;

	while (no != 0) {
		printf("1. 스케줄 추가\n");
		printf("2. 스케줄 실행\n");
		printf("0. 프로그램 종료\n");
		printf("메뉴 번호를 입력하세요 : ");
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