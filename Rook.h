#pragma once
#include "King.h"
class Rook : public Figure
{
public:
	void checkMove(Board* board, Figure* figure);
};

