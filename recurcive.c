//��� �Լ�
//�Լ��� �ڱ� �ڽ��� �� ȣ��
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
