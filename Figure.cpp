#include "Figure.h"

void Figure::setPresence(bool flag)
{
	isOnBoard = flag;
}

bool Figure::getPresence()
{
	return isOnBoard;
}

void Figure::setTexture()
{
	switch(type)
	{
	case BISHOP:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackBishop.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhiteBishop.png");
		break;
	case KING:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackKing.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhiteKing.png");
		break;
	case KNIGHT:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackKnight.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhiteKnight.png");
		break;
	case PAWN:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackPawn.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhitePawn.png");
		break;
	case QUEEN:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackQueen.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhiteQueen.png");
		break;
	case ROOK:
		if (color == BLACK)
			figureTexture.loadFromFile("Figures/BlackRook.png");
		else
			if (color == WHITE)
				figureTexture.loadFromFile("Figures/WhiteRook.png");
		break;
	}

	figureSprite.setTexture(figureTexture);
	figureSprite.setPosition(Vector2f(x, y));
	figureSprite.setScale(3, 3);
}

void Figure::setType(int _type)
{
	type = _type;
}

void Figure::setPosition(float _x, float _y)
{
	x = _x;
	y = _y;
	figureSprite.setPosition(Vector2f(x, y));
}

void Figure::setColor(int _color)
{
	color = _color;
}

Sprite Figure::getTexture()
{
	return figureSprite;
}

float Figure::getPositionX()
{
	return x;
}

float Figure::getPositionY()
{
	return y;
}

int Figure::getColor()
{
	return color;
}

void Figure::checkMove(Figure***& FiguresOnBoard, Board* board)
{

}
bool Figure::makeMove(Board* board, int MouseX, int MouseY)
{
	return 0;
}

int Figure::getType()
{
	return this->type;
}