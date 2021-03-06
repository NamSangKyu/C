/*
	NameCard_ver1 에 있던 NameCard 관리하는 부분을
	리스트로 변경해서 작업
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//NameCard 명함
//	이름, 회사명, 직급 - int, 연락처
typedef struct NameCard {
	char name[20];//20
	char company[30];//32
	int position;//4
	char tel[11];//12
} NameCard;
//노드
typedef struct node {
	NameCard* data; //저장될 값
	struct node* next;//다음위치 가리킬 포인터
}Node;

//리스트
typedef struct list {
	int size;//현재 저장된 노드 개수
	Node* header;//시작 노드
}List;

//데이터 등록 - NameCard 정보 등록 --> list 배열에 저장
void AddNameCard() {
	
}
//데이터 검색 - 이름을 받아서 검색
struct NameCard* searchNameCard() {
	
	return NULL;
}
//데이터 삭제 - 이름으로 검색해서 삭제
void deleteNameCard() {

}
//데이터 수정 - 이름으로 검색 후 데이터 입력을 받아서 수정
void updateNameCard() {
	
}


//전체 NameCard 목록 출력
void printAllNameCard() {
	
}

//데이터 초기화
void init() {
	//데이터를 임의로 4건
	/*strcpy(list[index].name, "홍길동");
	strcpy(list[index].company, "ABC마트");
	list[index].position = 3;
	strcpy(list[index].tel, "01012345678");
	index++;
	strcpy(list[index].name, "김철수");
	strcpy(list[index].company, "N사");
	list[index].position = 2;
	strcpy(list[index].tel, "01011112222");
	index++;
	strcpy(list[index].name, "이영수");
	strcpy(list[index].company, "K사");
	list[index].position = 4;
	strcpy(list[index].tel, "01033334444");
	index++;
	strcpy(list[index].name, "박문수");
	strcpy(list[index].company, "C카페");
	list[index].position = 7;
	strcpy(list[index].tel, "01000006789");
	index++;*/
}
int main(void) {
	init();
	int no = 0;
	do {
		printf("--NameCard 메뉴--\n");
		printf("1. NameCard 등록\n");
		printf("2. NameCard 검색\n");
		printf("3. NameCard 삭제\n");
		printf("4. NameCard 수정\n");
		printf("5. NameCard 전체 출력\n");
		printf("0. 프로그램 종료\n");
		printf("원하시는 메뉴 번호를 입력하세요 :");
		scanf_s("%d", &no);
		switch (no) {
		case 1:
			AddNameCard();
			break;
		case 2:
			searchNameCard();
			break;
		case 3:
			deleteNameCard();
			break;
		case 4:
			updateNameCard();
			break;
		case 5:
			printAllNameCard();
			break;
		}
	} while (no != 0);


	return 0;
}