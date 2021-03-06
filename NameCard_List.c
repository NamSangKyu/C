/*
	NameCard_ver1 �� �ִ� NameCard �����ϴ� �κ���
	����Ʈ�� �����ؼ� �۾�
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//NameCard ����
//	�̸�, ȸ���, ���� - int, ����ó
typedef struct NameCard {
	char name[20];//20
	char company[30];//32
	int position;//4
	char tel[12];//12
} NameCard;
//���
typedef struct node {
	NameCard* data; //����� ��
	struct node* next;//������ġ ����ų ������
}Node;

//����Ʈ
typedef struct list {
	int size;//���� ����� ��� ����
	Node* header;//���� ���
}List;

//������ ��� - NameCard ���� ��� --> list �迭�� ����
void AddNameCard() {
	
}
//������ �˻� - �̸��� �޾Ƽ� �˻�
struct NameCard* searchNameCard() {
	
	return NULL;
}
//������ ���� - �̸����� �˻��ؼ� ����
void deleteNameCard() {

}
//������ ���� - �̸����� �˻� �� ������ �Է��� �޾Ƽ� ����
void updateNameCard() {
	
}


//��ü NameCard ��� ���
void printAllNameCard(List* list) {
	Node* ptr = list->header;
	int i = 0;
	while (ptr != NULL) {
		printf("%d��° ���\n", i++);
		printf("�̸� : %s\n", ptr->data->name);
		printf("ȸ��� : %s\n", ptr->data->company);
		printf("���� : %d\n", ptr->data->position);
		printf("����ó : %s\n", ptr->data->tel);
		ptr = ptr->next;
	}
}

//������ �ʱ�ȭ
void init(List *list) {
	list->size = 0;
	list->header = NULL;

	//�����͸� ���Ƿ� 4��
	Node* ptr = (Node*)malloc(sizeof(Node));
	list->header = ptr; //�޸� �Ҵ��ؼ� ����� ����
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "ȫ�浿");
	strcpy(ptr->data->company, "ABC��Ʈ");
	ptr->data->position = 3;
	strcpy(ptr->data->tel, "01012345678");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "��ö��");
	strcpy(ptr->data->company, "N��");
	ptr->data->position = 2;
	strcpy(ptr->data->tel, "01011112222");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "�̿���");
	strcpy(ptr->data->company, "K��");
	ptr->data->position = 4;
	strcpy(ptr->data->tel, "01033334444");
	list->size++;
	ptr->next = (Node*)malloc(sizeof(Node));
	ptr = ptr->next;
	ptr->data = (NameCard*)malloc(sizeof(NameCard));
	strcpy(ptr->data->name, "�ڹ���");
	strcpy(ptr->data->company, "Cī��");
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
		printf("--NameCard �޴�--\n");
		printf("1. NameCard ���\n");
		printf("2. NameCard �˻�\n");
		printf("3. NameCard ����\n");
		printf("4. NameCard ����\n");
		printf("5. NameCard ��ü ���\n");
		printf("0. ���α׷� ����\n");
		printf("���Ͻô� �޴� ��ȣ�� �Է��ϼ��� :");
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
			printAllNameCard(&list);
			break;
		}
	} while (no != 0);


	return 0;
}