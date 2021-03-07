#include <iostream>

int main(void) {
	//1부터 100까지 숫자중 짝수의 합만 출력하는 반복문
	int total=0;

	for (int i = 1; i < 101; i++) {
		if(i%2==0)
			total += i;
	}
	//i가 지역변수로 선언되어서 for문이 끝나면 사라짐
	//std::cout << i << std::endl;
	std::cout << total << std::endl;
	return 0;
}