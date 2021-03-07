#include <iostream>
/*
	함수오버로딩
	함수명을 중복 선언 하되 매개변수 개수를 다르게하거나 
	매개변수 개수가 같다면 매개변수 타입을 다르게하면
	중복된 함수명을 쓸수 있게하는 문법
*/
//두 정수의 합을 리턴하는 함수
int sum(int n1, int n2) {
	return n1 + n2;
}
int sum(int n1, int n2, int n3) {
	return n1 + n2 + n3;
}
//두 실수의 합을 리턴하는 함수
double sum(double d1, double d2) {
	return d1 + d2;
}
//두 문자의 합을 리턴하는 함수
char sum(char c1, char c2) {
	return c1 + c2;
}

//default value function : 매개변수에 해당하는 값이 안들어오면 기본값으로 설정
//원넓이 구하는 함수
double area(int r=3) {
	return r * r * 3.1415;
}
int sum(int n1, int n2, int n3=1, int n4=2) {
	return n1 + n2 + n3 + n4;
}
int main(void) {
	std::cout << sum(5,10) << std::endl;
	std::cout << sum(3.14,4.76) << std::endl;
	std::cout << (int)sum('A','B') << std::endl;
	std::cout << area(4) << " " << area() << std::endl;
	return 0;
}