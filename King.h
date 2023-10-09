#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool hasShortLegs;//любая фигура либо ходит на 1 клетку, либо пока не встретит конец доски \ другую фигуру
public:
	King();
	void makeMove();
	void setLength(bool value);
};

