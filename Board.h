#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class Figure;

class Board
{
private:
	RectangleShape* board;
	Figure*** figuresOnBoard;
	Color color;
public:
	Board();
	void drawBoard(RenderWindow& window);//ќтрисовка доски и фигур
	void makeMove();//¬ыбор фигуры на доске, выбор свободной клетки дл€ хода, перемещение
	void setupBoard();//–асстановка доски и фигур
};