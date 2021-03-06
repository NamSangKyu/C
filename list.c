#include <stdio.h>
#include <stdlib.h>
//���
typedef struct node {
	int data; //����� ��
	struct node* next;//������ġ ����ų ������
}Node;

//����Ʈ
typedef struct list {
	int size;//���� ����� ��� ����
	Node* header;//���� ���
}List;
//�ʱ�ȭ
void init(List* list);
//��� �߰�
void NodeAppend(List* list, int num);
//��� ����
void NodeDelete(List* list, int num);
//��� �˻�
void NodeSearch(List* list, int num);
//��� ����
void NodeUpdate(List* list, int search, int update);
//��ü ��� ���
void PrintAllNode(List* list);
// ���� ��� ���� ���
void PrintNodeCount(List* list);

void init(List* list) {
	//����Ʈ �ʱ�ȭ
	list->size = 0;
	list->header = NULL;
}
void NodeAppend(List* list, int num) {
	//Node ����, ������ ����(num)
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = num;
	node->next = NULL;//������ ������ ���� ��带 ����ų �����ʹ� NULL ó��
	//������ ������ Ž��
	Node* ptr= list->header;
	if (ptr == NULL) {//�� ���´� ����Ʈ�� �����Ͱ� �ϳ��� ���� ����
		list->header = node;
		list->size++;
		return;
	}
	while (1) {
		if (ptr->next == NULL) {
			//������ ��带 ������ ��忡 ����
			ptr->next = node;
			list->size++;
			break;
		}
		//���� ��� �̵�
		ptr = ptr->next;
	}
}
void NodeSearch(List* list, int num) {
	//num �˻��� ��
	//�˻� ����� ������ �˻� ����� ���� ���
	Node* node = list->header;//header�� ù��° ���
	int i = 0;
	while (node != NULL) {
		if (node->data == num) {
			printf("�ش� ������ �˻�, �� ��° ��� : %d\n",i);
			return;
		}
		node = node->next;//���� ���� �̵�
		i++;
	}
	printf("�˻��� ��� �ش絥���Ͱ� �����ϴ�.\n");
}
void NodeDelete(List* list, int num) {
	Node* node = list->header;//header�� ù��° ���
	Node* back = NULL;
	
	while (node != NULL) {
		if (node->data == num) {
			//���� �۾�
			//���� ����� next �����Ϳ� ���� ����� next�����͸� ����
			//free �̿��ؼ� �ش� ��� ����
			return;
		}
		//������� ����

		node = node->next;//���� ���� �̵�
	
	}
	printf("������ �����Ͱ� �����ϴ�.\n");
}
void PrintAllNode(List* list) {
	//��ü ��� ���� ���
	Node* node = list->header;//header�� ù��° ���
	while (node != NULL) {
		printf("%d -> ", node->data);//���� ��� ������ ���
		node = node->next;//���� ���� �̵�
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




