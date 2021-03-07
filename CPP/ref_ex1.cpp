#include <iostream>
using namespace std;
void Swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void Swap_ref(int &ref1, int &ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}
int main(void) {
	int n1=10, n2=20;

	//���� �ΰ� �Է�
	//n1,n2�� ������ ���� ��ȯ�ϴ� �Լ��� �ۼ�
	//�ش��Լ� ���� �� ���
	Swap(&n1, &n2);
	cout << n1 << " : " << n2 << endl;
	Swap_ref(n1, n2);
	cout << n1 << " : " << n2 << endl;
	return 0;
}