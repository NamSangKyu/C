#include <iostream>
#include "Position.h"
using namespace std;
//Position Ŭ���� ������
void Position::Init(int x, int y) {
	if (x < 0 || y < 0) return;
	xPos = x;
	yPos = y;
}
void Position::ChangePos(Position p) {
	xPos = p.xPos;
	yPos = p.yPos;
}
void Position::PrintPos() {
	cout << "x : " << xPos << ", y : " << yPos << endl;
}