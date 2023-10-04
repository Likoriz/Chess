#include "Board.h"

void Board::setupBoard()
{
	bool isColored = true;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2)
			{
				if (j % 2)
					color = { 255, 255, 255 };
				else
					color = { 0, 0, 0 };
			}
			else
			{
				if (j % 2)
					color = { 0, 0, 0 };
				else
					color = { 255, 255, 255 };
			}
			board[j + (i * 8)].setPosition(j * 128.f, i * 128.f);
			board[j + (i * 8)].setSize(Vector2f(128.f, 128.f));
			board[j + (i * 8)].setFillColor(color);
		}
	}
}

void Board::drawBoard(RenderWindow& window)
{
	for (int i = 0; i < 64; i++)
		window.draw(board[i]);
}

void Board::makeMove()
{

}

Board::Board()
{
	board = new RectangleShape[64];

	figuresOnBoard = new Figure * *[4];
	for (int i = 0; i < 4; i++)
		figuresOnBoard[i] = new Figure * [8];
}