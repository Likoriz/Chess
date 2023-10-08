#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool has_short_legs;//любая фигура либо ходит на 1 клетку, либо пока не встретит конец доски \ другую фигуру
public:
	void makeMove();
	void setLength(bool value);
};

