#include "Knight.h"
#include "board.h"
void Knight::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	//cout<<"a";
	if(TmpX+2<8)
	{
		if(TmpY-1>-1)
		{
			if(!(FiguresOnBoard[TmpY-1][TmpX+2]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX+2]->getColor())
			{
				board->setMarker(TmpY-1, TmpX+2);
				cout<<"1";
			}
		}
		if(TmpY+1<8)
		{
			if(!(FiguresOnBoard[TmpY+1][TmpX+2]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX+2]->getColor())
			{
				board->setMarker(TmpY+1, TmpX+2);
				cout<<"2";
			}

		}
	}
	if(TmpX+1<8)
	{
		if(TmpY-2>-1)
		{
			if(!(FiguresOnBoard[TmpY-2][TmpX+1]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-2][TmpX+1]->getColor())
			{
				board->setMarker(TmpY-2, TmpX+1);
				cout<<"3";
			}
		}
		if(TmpY+2<8)
		{
			if(!(FiguresOnBoard[TmpY+2][TmpX+1]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+2][TmpX+1]->getColor())
			{
				board->setMarker(TmpY+2, TmpX+1);
				cout<<"4";
			}
		}
	}
	if(TmpX-2>-1)
	{
		
		if(TmpY-1>-1)
		{
			if(!(FiguresOnBoard[TmpY-1][TmpX-2]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX-2]->getColor())
			{
				board->setMarker(TmpY-1, TmpX-2);
				cout<<"5";
			}
		}
		if(TmpY+1<8)
		{
			if(!(FiguresOnBoard[TmpY+1][TmpX-2]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX-2]->getColor())
			{
				board->setMarker(TmpY+1, TmpX-2);
				cout<<"6";
			}
		}
	}
	if(TmpX-1>-1)
	{
		//cout<<"a";
		if(TmpY-2>-1)
		{
			if(!(FiguresOnBoard[TmpY-2][TmpX-1]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-2][TmpX-1]->getColor())
			{
				board->setMarker(TmpY-2, TmpX-1);
				cout<<"7";
			}
		}
		if(TmpY+2<8)
		{
			if(!(FiguresOnBoard[TmpY+2][TmpX-1]->getPresence())||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+2][TmpX-1]->getColor())
			{
				board->setMarker(TmpY+2, TmpX-1);
				cout<<"8";
			}
		}
	}
}
bool Knight::makeMove(Board* board, int MouseX, int MouseY)
{
	MouseX/=128;
	MouseY/=128;
	if(board->getMarkers()[MouseY][MouseX])
	{
		cout<<board->getFigure(MouseY*128, MouseX*128)->getPresence();
		if(board->getFigure(MouseY*128, MouseX*128)->getPresence())
		{
			if(board->getFigure(MouseY*128, MouseX*128)->getColor()!=this->getColor())
			{
				board->getFigure(MouseY*128, MouseX*128)->setPresence(false);
				this->setPosition(MouseX*128, MouseY*128);
				cout<<this->getPositionX()<<" "<<this->getPositionY()<<"\n";
				return true;
			}
		}
		else
		{
			this->setPosition(MouseX*128, MouseY*128);
			cout<<this->getPositionX()<<" "<<this->getPositionY()<<"\n";
			return true;
		}
	}
	else
		return false;
}