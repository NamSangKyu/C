//���ڿ� �Է� ���� ��
//�Է¹��� ���ڿ��� test�̸� ���ڿ��� ��ġ�մϴ�. ���
//test�� �ƴϸ� ���ڿ��� ��ġ���� �ʽ��ϴ�. ���
#include <iostream>
#include <cstring> //c���� ���� ��������� c���ϸ�, .h �Ⱦ�

using namespace std;

int main(void) {
	char str[100];

	cout << "���ڿ� �Է� : "; cin >> str;

	if (strcmp(str, "test") == 0)
		cout << "�Է��Ͻ� ���ڿ��� ��ġ�մϴ�." << endl;
	else
		cout << "�Է��Ͻ� ���ڿ��� ��ġ���� �ʽ��ϴ�." << endl;

	return 0;
}