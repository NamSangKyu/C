#include <iostream>
using namespace std;
struct Position{
	int xPos;
	int yPos;
	//외부로 부터 x,y 값을 받아서 초기화 하는 함수 - 1
	void Init(int x, int y){
		if(x < 0 || y < 0) return; //좌표는 양수만 받음
		xPos = x;
		yPos = y;
	}
	//외부로 부터 Position 구조체를 받아서 좌표를 변경하는 함수 - 2
	void ChangePos(Position p){
		xPos = p.xPos;
		yPos = p.yPos;
	}
	//좌표값 출력하는 함수 작성 - 3
	void PrintPos(){
		cout << "x : " << xPos << ", y : " << yPos << endl;
	}
};
int main(void){
	Position p;
	p.Init(10,20);
	p.xPos = -1;
	p.PrintPos();
	return 0;
}
