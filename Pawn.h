#pragma once
#include "King.h"
class Pawn : public Figure
{
private:
	bool didFirstMove=0;
public:
	void checkMove(Figure***& FiguresOnBoard, Board* board);
	bool hasDidFirstMove();
	void firstMoveIsDone();
};

