#include <iostream>
/*
	�Լ������ε�
	�Լ����� �ߺ� ���� �ϵ� �Ű����� ������ �ٸ����ϰų� 
	�Ű����� ������ ���ٸ� �Ű����� Ÿ���� �ٸ����ϸ�
	�ߺ��� �Լ����� ���� �ְ��ϴ� ����
*/
//�� ������ ���� �����ϴ� �Լ�
int sum(int n1, int n2) {
	return n1 + n2;
}
int sum(int n1, int n2, int n3) {
	return n1 + n2 + n3;
}
//�� �Ǽ��� ���� �����ϴ� �Լ�
double sum(double d1, double d2) {
	return d1 + d2;
}
//�� ������ ���� �����ϴ� �Լ�
char sum(char c1, char c2) {
	return c1 + c2;
}

//default value function : �Ű������� �ش��ϴ� ���� �ȵ����� �⺻������ ����
//������ ���ϴ� �Լ�
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