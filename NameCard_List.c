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
	char tel[11];//12
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
void printAllNameCard() {
	
}

//������ �ʱ�ȭ
void init() {
	//�����͸� ���Ƿ� 4��
	/*strcpy(list[index].name, "ȫ�浿");
	strcpy(list[index].company, "ABC��Ʈ");
	list[index].position = 3;
	strcpy(list[index].tel, "01012345678");
	index++;
	strcpy(list[index].name, "��ö��");
	strcpy(list[index].company, "N��");
	list[index].position = 2;
	strcpy(list[index].tel, "01011112222");
	index++;
	strcpy(list[index].name, "�̿���");
	strcpy(list[index].company, "K��");
	list[index].position = 4;
	strcpy(list[index].tel, "01033334444");
	index++;
	strcpy(list[index].name, "�ڹ���");
	strcpy(list[index].company, "Cī��");
	list[index].position = 7;
	strcpy(list[index].tel, "01000006789");
	index++;*/
}
int main(void) {
	init();
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
			printAllNameCard();
			break;
		}
	} while (no != 0);


	return 0;
}