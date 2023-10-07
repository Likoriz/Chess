#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figure.h"

using namespace sf;
using namespace std;

class Figure;

class Board
{
private:
	RectangleShape* board;
	Figure*** figuresOnBoard = { nullptr };
	Color color;
public:
	//Выделение памяти для доски и фигур
	Board();

	//Отрисовка доски и фигур
	void drawBoard(RenderWindow& window);

	//Расстановка доски и фигур
	void setupBoard();

	//Выбор фигуры на доске, выбор свободной клетки для хода, перемещение
	void makeMove();

	//Получение информации о количестве фигур на доске
	int amountOfFigures();
};