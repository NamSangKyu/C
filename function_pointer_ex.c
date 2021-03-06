#include <stdio.h>
//숫자 두개 매개변수로 받아서 사칙연산결과를 리턴하는 함수 작성
//덧셈
double sum(double a, double b) {
	return a + b;
}
//뺄셈
double minus(double a, double b) {
	return a - b;
}
//곱셈
double multiple(double a, double b) {
	return a * b;
}
//나눗셈
double div(double a, double b) {
	return a / b;
}
//void 포인터는 메모리 주소를 전달하는 용, 함수 포인터로도 쓰임
//op 값에 따라 실행해야될 함수를 리턴
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
	printf("숫자 두개 입력 : ");
	scanf_s("%lf %lf", &n1, &n2);

	printf("사용할 사칙연산자 : ");
	scanf_s(" %c", &op, 2);

	func = MappingFunction(op);
	if(func != NULL)
		result = func(n1, n2);
	printf("result : %lf\n", result);


	return 0;
}




