#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void) {
	//������ �迭�� ���� �Ҵ����� 10���� �����ѵ�
	//int* arr = (int*)malloc(sizeof(int) * 10);
	int* arr = new int[10];
	int total = 0;
	//���ڸ� �Է��ϰ� �ش� ������ ���
	for (int i = 0; i < 10; i++) {
		cout << "���� �Է� : "; cin >> arr[i];
		total += arr[i];
	}
	cout << "�Է��Ͻ� ���ڵ��� ���� : " << total << endl;
	//free(arr);//�����Ҵ��� �޸� ����
	delete[] arr;//new�� �����Ҵ��� �޸� ����
	return 0;
}