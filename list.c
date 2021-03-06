#include <stdio.h>
#include <stdlib.h>
//노드
typedef struct node {
	int data; //저장될 값
	struct node* next;//다음위치 가리킬 포인터
}Node;

//리스트
typedef struct list {
	int size;//현재 저장된 노드 개수
	Node* header;//시작 노드
}List;
//초기화
void init(List* list);
//노드 추가
void NodeAppend(List* list, int num);
//노드 삭제
void NodeDelete(List* list, int num);
//노드 검색
void NodeSearch(List* list, int num);
//노드 수정
void NodeUpdate(List* list, int search, int update);
//전체 노드 출력
void PrintAllNode(List* list);
// 현재 노드 개수 출력
void PrintNodeCount(List* list);

void init(List* list) {
	//리스트 초기화
	list->size = 0;
	list->header = NULL;
}
void NodeAppend(List* list, int num) {
	//Node 생성, 데이터 셋팅(num)
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = num;
	node->next = NULL;//마지막 데이터 다음 노드를 가리킬 포인터는 NULL 처리
	//마지막 노드까지 탐색
	Node* ptr= list->header;
	if (ptr == NULL) {//이 상태는 리스트에 데이터가 하나도 없는 형태
		list->header = node;
		list->size++;
		return;
	}
	while (1) {
		if (ptr->next == NULL) {
			//생성한 노드를 마지막 노드에 연결
			ptr->next = node;
			list->size++;
			break;
		}
		//다음 노드 이동
		ptr = ptr->next;
	}
}
void NodeSearch(List* list, int num) {
	//num 검색할 값
	//검색 결과가 없으면 검색 결과가 없다 출력
	Node* node = list->header;//header가 첫번째 노드
	int i = 0;
	while (node != NULL) {
		if (node->data == num) {
			printf("해당 데이터 검색, 몇 번째 노드 : %d\n",i);
			return;
		}
		node = node->next;//다음 노드로 이동
		i++;
	}
	printf("검색한 결과 해당데이터가 없습니다.\n");
}
void NodeDelete(List* list, int num) {
	Node* node = list->header;//header가 첫번째 노드
	Node* back = NULL;
	
	while (node != NULL) {
		if (node->data == num) {
			//삭제 작업
			//이전 노드의 next 포인터에 현재 노드의 next포인터를 저장
			//free 이용해서 해당 노드 해제
			return;
		}
		//이전노드 저장

		node = node->next;//다음 노드로 이동
	
	}
	printf("삭제할 데이터가 없습니다.\n");
}
void PrintAllNode(List* list) {
	//전체 노드 순차 출력
	Node* node = list->header;//header가 첫번째 노드
	while (node != NULL) {
		printf("%d -> ", node->data);//현재 노드 데이터 출력
		node = node->next;//다음 노드로 이동
	}
	printf("NULL\n");
}
int main(void) {
	List list;
	init(&list);
	NodeAppend(&list, 1); NodeAppend(&list, 2);
	NodeAppend(&list, 3); NodeAppend(&list, 4);
	NodeAppend(&list, 5); NodeAppend(&list, 6);
	NodeAppend(&list, 7); NodeAppend(&list, 8);
	PrintAllNode(&list);
	NodeSearch(&list, 4);


	return 0;
};




