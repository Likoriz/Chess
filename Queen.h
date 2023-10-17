#pragma once
#include "Figure.h"

class Queen : public Figure
{
public:
	void checkMove(Board& board, Figure& figure);
};
