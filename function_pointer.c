#include <stdio.h>
/*
	�Լ� ������ : �����Ͱ� �Լ��� ����Ŵ

*/
int sum(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
double div(double a, double b) {
	printf("div ����\n");
	return a / b;
}
int main(void) {
	//�Լ� ������ �⺻ ����
	int (*ptr)(int, int) = sum;
	printf("%d\n", ptr(10, 20));
	ptr = minus;
	printf("%d\n", ptr(10, 20));
	//�Լ� ���°� �޶� ������ ������ �����Ͱ� ���������� ó�������� ����
	ptr = div;
	printf("%lf\n", ptr(5.14, 2.15));
	return 0;
}