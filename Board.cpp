#include "Board.h"

Board::Board()
{
	board = new RectangleShape[64];

	figuresOnBoard = new Figure ** [8];
	for (int i = 0; i < 8; i++)
		figuresOnBoard[i] = new Figure*[8];
}

void Board::drawBoard(RenderWindow& window)
{
	for (int i = 0; i < 64; i++)
		window.draw(board[i]);

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			window.draw(figuresOnBoard[i][j]->getTexture());
}

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
					color = { 240, 217, 181 };
				else
					color = { 181, 136, 99 };
			}
			else
			{
				if (j % 2)
					color = { 181, 136, 99 };
				else
					color = { 240, 217, 181 };
			}

			board[j + (i * 8)].setPosition(j * 128.f, i * 128.f);
			board[j + (i * 8)].setSize(Vector2f(128.f, 128.f));
			board[j + (i * 8)].setFillColor(color);

			figuresOnBoard[i][j] = new Figure;

			if (j == 0 || j == 7)
			{
				if (i == 0)
				{
					//figuresOnBoard[i][j] = new Rook();
					figuresOnBoard[i][j] = new Figure();
					figuresOnBoard[i][j]->setColor(BLACK);
					figuresOnBoard[i][j]->setType(ROOK);
					figuresOnBoard[i][j]->setPresence(true);
				}
				else
					if (i == 7)
					{
						//figuresOnBoard[i][j] = new Rook();
						figuresOnBoard[i][j] = new Figure();
						figuresOnBoard[i][j]->setColor(WHITE);
						figuresOnBoard[i][j]->setType(ROOK);
						figuresOnBoard[i][j]->setPresence(true);
					}
			}
			else
				if (j == 1 || j == 6)
				{
					if (i == 0)
					{
						//figuresOnBoard[i][j] = new Knight();
						figuresOnBoard[i][j] = new Figure();
						figuresOnBoard[i][j]->setColor(BLACK);
						figuresOnBoard[i][j]->setType(KNIGHT);
						figuresOnBoard[i][j]->setPresence(true);
					}
					else
						if (i == 7)
						{
							//figuresOnBoard[i][j] = new Knight();
							figuresOnBoard[i][j] = new Figure();
							figuresOnBoard[i][j]->setColor(WHITE);
							figuresOnBoard[i][j]->setType(KNIGHT);
							figuresOnBoard[i][j]->setPresence(true);
						}
				}
				else
					if (j == 2 || j == 5)
					{
						if (i == 0)
						{
							//figuresOnBoard[i][j] = new Bishop();
							figuresOnBoard[i][j] = new Figure();
							figuresOnBoard[i][j]->setColor(BLACK);
							figuresOnBoard[i][j]->setType(BISHOP);
							figuresOnBoard[i][j]->setPresence(true);
						}
						else
							if (i == 7)
							{
								//figuresOnBoard[i][j] = new Bishop();
								figuresOnBoard[i][j] = new Figure();
								figuresOnBoard[i][j]->setColor(WHITE);
								figuresOnBoard[i][j]->setType(BISHOP);
								figuresOnBoard[i][j]->setPresence(true);
							}
					}
					else
						if (j == 3)
						{
							if (i == 0)
							{
								//figuresOnBoard[i][j] = new Queen();
								figuresOnBoard[i][j] = new Figure();
								figuresOnBoard[i][j]->setColor(BLACK);
								figuresOnBoard[i][j]->setType(QUEEN);
								figuresOnBoard[i][j]->setPresence(true);
							}
							else
								if (i == 7)
								{
									//figuresOnBoard[i][j] = new Queen();
									figuresOnBoard[i][j] = new Figure();
									figuresOnBoard[i][j]->setColor(WHITE);
									figuresOnBoard[i][j]->setType(QUEEN);
									figuresOnBoard[i][j]->setPresence(true);
								}
						}
						else
						{
							if (i == 0)
							{
								//figuresOnBoard[i][j] = new King();
								figuresOnBoard[i][j] = new Figure();
								figuresOnBoard[i][j]->setColor(BLACK);
								figuresOnBoard[i][j]->setType(KING);
								figuresOnBoard[i][j]->setPresence(true);
							}
							else
								if (i == 7)
								{
									//figuresOnBoard[i][j] = new King();
									figuresOnBoard[i][j] = new Figure();
									figuresOnBoard[i][j]->setColor(WHITE);
									figuresOnBoard[i][j]->setType(KING);
									figuresOnBoard[i][j]->setPresence(true);
								}
						}

			if (i == 1)
			{
				//figuresOnBoard[i][j] = new Pawn();
				figuresOnBoard[i][j] = new Figure();
				figuresOnBoard[i][j]->setColor(BLACK);
				figuresOnBoard[i][j]->setType(PAWN);
				figuresOnBoard[i][j]->setPresence(true);
			}
			else
				if (i == 6)
				{
					//figuresOnBoard[i][j] = new Pawn();
					figuresOnBoard[i][j] = new Figure();
					figuresOnBoard[i][j]->setColor(WHITE);
					figuresOnBoard[i][j]->setType(PAWN);
					figuresOnBoard[i][j]->setPresence(true);
				}

	
			figuresOnBoard[i][j]->setPosition(j * 128.f, i * 128.f);
			figuresOnBoard[i][j]->setTexture();
		}
	}
}

void Board::makeMove()
{

}

int Board::amountOfFigures()
{
	int count = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			if (figuresOnBoard[i][j]->getPresence())
				count++;
		}
	return count;
}