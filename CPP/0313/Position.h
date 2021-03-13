#pragma once
class Position {
private:
	int xPos;
	int yPos;
public:
	void Init(int x, int y);
	void ChangePos(Position p);
	void PrintPos();
};