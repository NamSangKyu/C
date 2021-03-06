#include <stdio.h>
//enum 열거형, 정수형 상수를 만드는 문법, 자동으로 번호를 부여
//숫자를 지정하지 않으면 0부터 시작
//이전에 설정된 값에서 +1 할당
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