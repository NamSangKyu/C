#include <stdio.h>
//enum ������, ������ ����� ����� ����, �ڵ����� ��ȣ�� �ο�
//���ڸ� �������� ������ 0���� ����
//������ ������ ������ +1 �Ҵ�
enum {
	ADD,
	DELETE = 100,
	SELECT,
	UPDATE
};
int main(void) {
	printf("ADD : %d\n", ADD);
	printf("DELETE : %d\n", DELETE );
	printf("SELECT : %d\n", SELECT);
	printf("UPDATE : %d\n", UPDATE);
	return 0;
}