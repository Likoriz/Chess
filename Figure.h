#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class Figure
{
private:
	int x, y;
	Texture figureTexture;
	Sprite figureSprite;
	enum figureColor { WHITE = 0, BLACK = 1 };
	enum figureType { BISHOP = 0, KING = 1, KNIGHT = 2, PAWN = 3, QUEEN = 4, ROOK = 5};
	int type;
	int color;

public:
	virtual void checkMove();//проверка возможных ходов для каждой фигуры
	virtual void loadFigure();//подгрузка текстур для фигур
};


