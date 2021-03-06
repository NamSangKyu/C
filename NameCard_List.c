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
	char tel[12];//12
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
void AddNameCard(List* list) {
	//NameCard 생성 입력
	NameCard* data = (NameCard*)malloc(sizeof(NameCard));
	printf("이름 입력 : "); scanf(" %s", data->name);
	printf("회사명 입력 : "); scanf(" %s", data->company);
	printf("직급 입력 : "); scanf(" %d", &data->position);
	printf("연락처 입력 : "); scanf(" %s", data->tel);
	//Node생성 NameCard 저장, next 포인터를 NULL로 초기화
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	//첫번째 노드가 NULL?
	if (list->header == NULL) {
		//	-- 첫번째 노드가 NULL 데이터가 하나도 없다
		//	-- header에 생성한 노드 연결
		list->header = node;
		list->size++;
		return;
	}
	//첫번째 노드에 데이터가 있는 경우
	Node* temp = list->header;
	while (temp->next != NULL) {
		//	-- 마지막 노드 이동
		temp = temp->next;
	}
	//	-- 마지막 노드 next 포인터에 연결
	temp->next = node;
}
//데이터 검색 - 이름을 받아서 검색
struct NameCard* searchNameCard(List* list) {
	Node* node = list->header;
	char name[20];
	int i = 0;
	printf("검색할 이름을 입력 : ");
	scanf(" %s", name);
	while (node != NULL) {
		if (strcmp(node->data->name, name) == 0) {
			printf("검색 결과 %d번째 노드에 위치함\n", i);
			return node->data;
		}
		node = node->next;
		i++;
	}
	return NULL;
}
//데이터 삭제 - 이름으로 검색해서 삭제
void deleteNameCard(List* list) {
	Node* node = list->header;
	Node* back = NULL;
	char name[20];
	int i = 0;
	printf("삭제할 이름을 입력 : ");
	scanf(" %s", name);
	while (node != NULL) {
		if (strcmp(node->data->name, name) == 0) {
			if (back == NULL)
				list->header = node->next;
			else
				back->next = node->next;
			break;
		}
		back = node;
		node = node->next;
		i++;
	}
}
//데이터 수정 - 이름으로 검색 후 데이터 입력을 받아서 수정
void updateNameCard(List* list) {
	Node* node = list->header;
	char name[20];
	int i = 0;
	printf("검색할 이름을 입력 : ");
	scanf(" %s", name);
	while (node != NULL) {
		if (strcmp(node->data->name, name) == 0) {
			printf("수정할 이름 : ");
			scanf(" %s", node->data->name);
			printf("수정할 회사명 : ");
			scanf(" %s", node->data->company);
			printf("수정할 직급 : ");
			scanf(" %d", node->data->position);
			printf("수정할 연락처 : ");
			scanf(" %s", node->data->tel);
			break;
		}
		node = node->next;
		i++;
	}
}


//전체 NameCard 목록 출력
void printAllNameCard(List* list) {
	Node* ptr = list->header;
	int i = 0;
	while (ptr != NULL) {
		printf("%d번째 노드\n", i++);
		printf("이름 : %s\n", ptr->data->name);
		printf("회사명 : %s\n", ptr->data->company);
		printf("직급 : %d\n", ptr->data->position);
		printf("연락처 : %s\n", ptr->data->tel);
		ptr = ptr->next;
	}
}

//데이터 초기화
void init(List* list) {
	list->size = 0;
	list->header = NULL;

	//데이터를 임의로 4건
	Node* ptr = (Node*)malloc(sizeof(Node));
	list->header = ptr; //메모리 할당해서 헤더에 연결
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "홍길동");
	strcpy(ptr->data->company, "ABC마트");
	ptr->data->position = 3;
	strcpy(ptr->data->tel, "01012345678");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "김철수");
	strcpy(ptr->data->company, "N사");
	ptr->data->position = 2;
	strcpy(ptr->data->tel, "01011112222");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "이영수");
	strcpy(ptr->data->company, "K사");
	ptr->data->position = 4;
	strcpy(ptr->data->tel, "01033334444");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "박문수");
	strcpy(ptr->data->company, "C카페");
	ptr->data->position = 7;
	strcpy(ptr->data->tel, "01000006789");
	list->size++;
	ptr->next = NULL;

}
int main(void) {
	List list;
	init(&list);
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
			AddNameCard(&list);
			break;
		case 2:
			searchNameCard(&list);
			break;
		case 3:
			deleteNameCard(&list);
			break;
		case 4:
			updateNameCard(&list);
			break;
		case 5:
			printAllNameCard(&list);
			break;
		}
	} while (no != 0);


	return 0;
}