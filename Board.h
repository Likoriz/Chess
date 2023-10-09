#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"

using namespace sf;
using namespace std;

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
	Figure* chooseFigure();
	//Расстановка доски и фигур
	void setupBoard();
	//Получение информации о количестве фигур на доске
};