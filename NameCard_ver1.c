#include <stdio.h>
#include <string.h>
//NameCard ����
//	�̸�, ȸ���, ���� - int, ����ó
struct NameCard {
	char name[20];//20
	char company[30];//32
	int position;//4
	char tel[11];//12
};
struct NameCard list[20];
int index = 0;
//������ ��� - NameCard ���� ��� --> list �迭�� ����
void AddNameCard() {
	if (index == 20) {
		printf("���̻� �����͸� ������ �� �����ϴ�.");
		return;
	}
	//������ ��� ó��
	printf("NameCard ����� �����մϴ�.\n");
	printf("�̸� : ");
	scanf_s("%s", list[index].name, sizeof(list[index].name));
	printf("ȸ��� : ");
	scanf_s("%s", list[index].company, sizeof(list[index].company));
	printf("���� : ");
	scanf_s("%d", &list[index].tel);
	printf("����ó : ");
	scanf_s("%s", list[index].tel, sizeof(list[index].tel));
	index++;
	printf("������ ����� �Ϸ� �Ǿ����ϴ�.\n");
}
//������ �˻� - �̸��� �޾Ƽ� �˻�
struct NameCard* searchNameCard() {
	char name[20];
	int i;
	printf("�˻��� �����մϴ�. �˻��� �̸��� �Է��ϼ���\n");
	scanf_s("%s", name, 20);

	for (i = 0; i < index; i++) {
		if (strcmp(name, list[i].name) == 0)
			return &list[i];
	}
	printf("�˻� ����� �����ϴ�.\n");
	return NULL;
}
//������ ���� - �̸����� �˻��ؼ� ����
void deleteNameCard() {
	int i;
	printf("������ �����ϰڽ��ϴ�.");
	struct NameCard* card = searchNameCard();
	printf("������ ������ : %s %s %d %s\n", card->name, card->company,
		card->position, card->tel);
		
	while (card != &list[index]) {
		*card = *(card + 1);
		//printf("%d\n", card);
		card++;
	}
	index--;
}
//������ ���� - �̸����� �˻� �� ������ �Է��� �޾Ƽ� ����
void updateNameCard() {
	//������ NameCard �˻�
	printf("NameCard ���� �۾��� �����մϴ�.");
	struct NameCard *card = searchNameCard();
	//������ ������ ���θ� �Է� �޾Ƽ� ����
	printf("������ �̸� : ");
	scanf_s("%s", card->name, 20);
	printf("������ ȸ��� : ");
	scanf_s("%s", card->company, 30);
	printf("������ ���� : ");
	scanf_s("%d", &card->position);
	printf("������ ����ó : ");
	scanf_s("%s", card->tel, 12);
	printf("���� �۾� �Ϸ�\n");
}


//��ü NameCard ��� ���
void printAllNameCard() {
	int i;
	for (i = 0; i < index; i++) {
		printf("%s %s %d %s\n", list[i].name, 
			list[i].company, list[i].position, list[i].tel);
	}
}

//������ �ʱ�ȭ
void init() {
	//�����͸� ���Ƿ� 4��
	strcpy(list[index].name, "ȫ�浿");
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
	index++;
}
int main(void) {
	init();
	int no=0;
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