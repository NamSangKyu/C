#include <iostream>
using namespace std;
//������ : ���� ������ �̸��� �ϳ� �̻� �� �ٿ��� ����ϴ� ���
//         ������ ȿ���� ������ ����ϴ°� �Ϲ� ����ó�� ���
//		   ����� �ݵ�� ���� ������ �ʱ�ȭ�� �ؾߵ�
int main(void) {
	int num = 10;
	//������
	int& ref = num;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	num++;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	ref++;
	cout << num << " " << &num << endl;
	cout << ref << " " << &ref << endl;
	return 0;
}