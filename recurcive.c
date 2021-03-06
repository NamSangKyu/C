//재귀 함수
//함수가 자기 자신을 또 호출
//5! = 120 = 1*2*3*4*5
#include <stdio.h>
int Factorial(int n) {
	if (n == 1)
		return 1;
	return n * Factorial(n - 1);
}
//return 5 * [return 4 * [return 3 * [return 2 * [return 1* 1 ]]]
int main(void) {

	printf("5! : %d\n", Factorial(5));

	return 0;
}
