#include <iostream>
using namespace std;
class Number {
private:
	static int num;
	int t;
public:
	void AddNumber() {
		//static�� ������ �ȵȺκп����� �̹� static �޸𸮰� �Ҵ�Ǿ��ִ� ����
		//static ����� �κп� ������ ����
		num++;
	}
	static int GetNum() {
	//	static ���� �� �κп����� static ������ �ȵ� ������ �Լ��� �����Ҽ� ����
	//	t++;
		return num;
	}
};
//static���� ����� ���� �ݵ�� �ʱ�ȭ
int Number::num = 0;
int main(void) {
	Number b;
	b.AddNumber(); b.AddNumber(); b.AddNumber();
	cout << Number::GetNum() << endl;
	cout << b.GetNum() << endl;
	return 0;
}




