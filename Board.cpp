#include "Board.h"

Board::Board()
{
	board = new RectangleShape[64];

	figuresOnBoard = new Figure ** [8];
	mas=(int**)malloc(sizeof(int*)*8);
	for(int i=0; i<8; i++)
	{
		figuresOnBoard[i]=new Figure*[8];
		mas[i]=(int*)calloc(8,sizeof(int));
	}
	
}

void Board::drawBoard(RenderWindow& window)
{
	for (int i = 0; i < 64; i++)
		window.draw(board[i]);

	for (int i = 0; i < 8; i++)
		for(int j=0; j<8; j++)
		{
			if (figuresOnBoard[i][j]->getPresence())
			{
				window.draw(figuresOnBoard[i][j]->getTexture());
			}
			if(mas[i][j]==1) {
				//cout<<"\na";
				CircleShape circle;
				circle.setPosition(j*128, i*128);
				circle.setRadius(64);
				circle.setFillColor(Color::Red);
				window.draw(circle);
			}
		}
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
					figuresOnBoard[i][j] = new Rook();
					//figuresOnBoard[i][j] = new Figure();
					figuresOnBoard[i][j]->setColor(BLACK);
					figuresOnBoard[i][j]->setType(ROOK);
					figuresOnBoard[i][j]->setPresence(true);
				}
				else
					if (i == 7)
					{
						figuresOnBoard[i][j] = new Rook();
						//figuresOnBoard[i][j] = new Figure();
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
						figuresOnBoard[i][j] = new Knight();
						figuresOnBoard[i][j]->setColor(BLACK);
						figuresOnBoard[i][j]->setType(KNIGHT);
						figuresOnBoard[i][j]->setPresence(true);
					}
					else
						if (i == 7)
						{
							figuresOnBoard[i][j] = new Knight();
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
							figuresOnBoard[i][j] = new Bishop();
							figuresOnBoard[i][j]->setColor(BLACK);
							figuresOnBoard[i][j]->setType(BISHOP);
							figuresOnBoard[i][j]->setPresence(true);
						}
						else
							if (i == 7)
							{
								figuresOnBoard[i][j] = new Bishop();
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
								figuresOnBoard[i][j] = new Queen();
								figuresOnBoard[i][j]->setColor(BLACK);
								figuresOnBoard[i][j]->setType(QUEEN);
								figuresOnBoard[i][j]->setPresence(true);
							}
							else
								if (i == 7)
								{
									figuresOnBoard[i][j] = new Queen();
									figuresOnBoard[i][j]->setColor(WHITE);
									figuresOnBoard[i][j]->setType(QUEEN);
									figuresOnBoard[i][j]->setPresence(true);
								}
						}
						else
						{
							if (i == 0)
							{
								figuresOnBoard[i][j] = new King();
								figuresOnBoard[i][j]->setColor(BLACK);
								figuresOnBoard[i][j]->setType(KING);
								figuresOnBoard[i][j]->setPresence(true);
							}
							else
								if (i == 7)
								{
									figuresOnBoard[i][j] = new King();
									figuresOnBoard[i][j]->setColor(WHITE);
									figuresOnBoard[i][j]->setType(KING);
									figuresOnBoard[i][j]->setPresence(true);
								}
						}

			if (i == 1)
			{
				figuresOnBoard[i][j] = new Pawn();
				figuresOnBoard[i][j]->setColor(BLACK);
				figuresOnBoard[i][j]->setType(PAWN);
				figuresOnBoard[i][j]->setPresence(true);
			}
			else
				if (i == 6)
				{
					figuresOnBoard[i][j] = new Pawn();
					figuresOnBoard[i][j]->setColor(WHITE);
					figuresOnBoard[i][j]->setType(PAWN);
					figuresOnBoard[i][j]->setPresence(true);
				}

	
			figuresOnBoard[i][j]->setPosition(j * 128.f, i * 128.f);
			figuresOnBoard[i][j]->setTexture();
			cout<<figuresOnBoard[i][j]->getPresence();
		}
	}
}


Figure* Board::getFigure(float _x, float _y)
{
	_x/=128.f;
	_y/=128.f;
	return figuresOnBoard[(int)_y][(int)_x];
	
}

void Board::resetChoice()
{
	ChosenFigure=nullptr;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			mas[i][j]=0;
}

void Board::chooseFigure(int MouseX, int MouseY, Board* board)
{
	if(this->GetChosenFigure()!=nullptr)
		{
		if(!(this->getFigure(MouseX, MouseY)->getPresence())||this->GetChosenFigure()->getColor()!=this->getFigure(MouseX, MouseY)->getColor())
		{
			if(this->GetChosenFigure()->makeMove(board, MouseX, MouseY))
			{
				this->resetChoice();
				this->ChangeTurn();
			}
		}
	}
	else
	{
		this->SetChosenFigure(getFigure(MouseX, MouseY));
		if(this->GetChosenFigure()->getColor()==turn)
		{
			this->GetChosenFigure()->checkMove(figuresOnBoard, board);
			cout<<"\n"<<this->GetChosenFigure()->getPositionX()<<" "<<this->GetChosenFigure()->getPositionY()<<" "<<this->GetChosenFigure()->getPresence()<<"\n";
		}
	}
}

void Board::setMarker(int i, int j) {
	mas[i][j]=1;
}

int** Board::getMarkers()
{
	return (int**)mas;
}

void Board::ChangeTurn()
{
	turn=!turn;
}
void Board::SetChosenFigure(Figure* fig)
{
	ChosenFigure=fig;
}

Figure* Board::GetChosenFigure()
{
	return ChosenFigure;
}

bool Board::KingsAreAlive()
{
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			if(this->figuresOnBoard[i][j]->getType()==KING&&!(this->figuresOnBoard[i][j]->getPresence()))
				return false;
	return true;
}