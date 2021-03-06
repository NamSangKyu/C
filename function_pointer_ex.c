#include <stdio.h>
//���� �ΰ� �Ű������� �޾Ƽ� ��Ģ�������� �����ϴ� �Լ� �ۼ�
//����
double sum(double a, double b) {
	return a + b;
}
//����
double minus(double a, double b) {
	return a - b;
}
//����
double multiple(double a, double b) {
	return a * b;
}
//������
double div(double a, double b) {
	return a / b;
}
//void �����ʹ� �޸� �ּҸ� �����ϴ� ��, �Լ� �����ͷε� ����
//op ���� ���� �����ؾߵ� �Լ��� ����
void* MappingFunction(char op) {
	switch (op) {
	case '+':
		return sum;
	case '-':
		return minus;
	case '*':
		return multiple;
	case '/':
		return div;
	}
	return NULL;
}
int main(void) {
	double n1, n2, result=0.0;
	char op;
	double (*func)(double, double) = NULL;
	printf("���� �ΰ� �Է� : ");
	scanf_s("%lf %lf", &n1, &n2);

	printf("����� ��Ģ������ : ");
	scanf_s(" %c", &op, 2);

	func = MappingFunction(op);
	if(func != NULL)
		result = func(n1, n2);
	printf("result : %lf\n", result);


	return 0;
}




