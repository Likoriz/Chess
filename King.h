#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool hasShortLegs;//любая фигура либо ходит на 1 клетку, либо пока не встретит конец доски \ другую фигуру
	int mas_of_possible_turns[9]; //"маска", определяющая, куда можно ходить фигуре
public:
	King();
	void makeMove();
	void setLength(bool value);
};

