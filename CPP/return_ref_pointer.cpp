#include <iostream>
using namespace std;
int& AddNumber(int& n) {
	n++;
	return n;
}

int main(void) {
	int num = 10;
	int& ref = AddNumber(num);

	cout << num << " " << ref << endl;
	cout << &num << " " << &ref << endl;
	cout << "--------------------------" << endl;
	//�����ڷ� �����Ѵٰ� �ؼ� �� �����ڷ� ���� �ʿ�� ����
	//�Ϲ� ������ �׳� ���� ���� ����
	int result = AddNumber(num);
	cout << num << " " << result << endl;
	cout << &num << " " << &result << endl;
	return 0;
}