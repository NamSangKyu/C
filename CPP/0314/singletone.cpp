#include <iostream>
using namespace std;
class Number {
private:
	static Number* instance;
	int num;
	Number() {
		num = 0;
		cout << "Number instance Constructor" << endl;
	}
public:
	static Number& getInstance() {
		if (instance == NULL)
			instance = new Number();
		return *instance;
	}
	Number& add() {
		num++;
		return *instance;
	}
	void printInfo() {
		cout << "num : " << num << endl;
	}
};
Number* Number::instance = NULL;
int main(void) {
	//Number n;
	Number::getInstance();
	Number::getInstance().add().add().add(); //체인함수
	Number::getInstance().add();
	Number::getInstance().add();
	Number::getInstance().add();

	Number::getInstance().printInfo();

	return 0;
}