#pragma once
#include "King.h"
class Pawn : public Figure
{
private:
	bool didFirstMove=0;
public:
	void checkMove(Figure***& FiguresOnBoard, Board* board);
	bool makeMove(Board* board, int MouseX, int MouseY);
	bool hasDidFirstMove();
	void firstMoveIsDone();
};

