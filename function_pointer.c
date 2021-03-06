#include <stdio.h>
/*
	함수 포인터 : 포인터가 함수를 가리킴

*/
int sum(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
double div(double a, double b) {
	printf("div 실행\n");
	return a / b;
}
int main(void) {
	//함수 포인터 기본 문법
	int (*ptr)(int, int) = sum;
	printf("%d\n", ptr(10, 20));
	ptr = minus;
	printf("%d\n", ptr(10, 20));
	//함수 형태가 달라서 수행은 되지만 데이터가 정상적으로 처리되지는 않음
	ptr = div;
	printf("%lf\n", ptr(5.14, 2.15));
	return 0;
}