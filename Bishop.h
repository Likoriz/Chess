#pragma once
#include "Figure.h"
class Bishop : public Figure
{
public:
	void checkMove(Board* board, Figure* figure);
	bool makeMove(Board* board, int MouseX, int MouseY);
};

