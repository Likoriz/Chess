#pragma once
#include "Figure.h"
class Rook : public Figure
{
public:
	void checkMove(Figure***& FiguresOnBoard, Board* board);
	bool makeMove(Board* board, int MouseX, int MouseY);
};

