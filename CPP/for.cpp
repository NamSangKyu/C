#include <iostream>

int main(void) {
	//1���� 100���� ������ ¦���� �ո� ����ϴ� �ݺ���
	int total=0;

	for (int i = 1; i < 101; i++) {
		if(i%2==0)
			total += i;
	}
	//i�� ���������� ����Ǿ for���� ������ �����
	//std::cout << i << std::endl;
	std::cout << total << std::endl;
	return 0;
}