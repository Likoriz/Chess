#include "King.h"
#include "board.h"
void King::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	if(TmpX+1<8)
	{
		if(!FiguresOnBoard[TmpY][TmpX+1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY][TmpX+1]->getColor())
			board->setMarker(TmpY,TmpX+1);
		if(TmpY-1>-1)
		{
			if(!FiguresOnBoard[TmpY-1][TmpX+1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX+1]->getColor())
				board->setMarker(TmpY-1, TmpX+1);
		}
		if(TmpY+1<8)
		{
			if(!FiguresOnBoard[TmpY+1][TmpX+1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX+1]->getColor())
				board->setMarker(TmpY+1, TmpX+1);
		}
	}
	if(TmpX-1>-1)
	{
		if(!FiguresOnBoard[TmpY][TmpX-1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY][TmpX-1]->getColor())
			board->setMarker(TmpY, TmpX-1);
		if(TmpY-1>-1)
		{
			if(!FiguresOnBoard[TmpY-1][TmpX-1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX-1]->getColor())
				board->setMarker(TmpY-1, TmpX-1);
		}
		if(TmpY+1<8)
		{
			if(!FiguresOnBoard[TmpY+1][TmpX-1]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX-1]->getColor())
				board->setMarker(TmpY+1, TmpX-1);
		}
	}
	if(TmpY-1>-1)
	{
		if(!FiguresOnBoard[TmpY-1][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX]->getColor())
			board->setMarker(TmpY-1, TmpX);
	}
	if(TmpY+1<8)
	{
		if(!FiguresOnBoard[TmpY+1][TmpX]->getPresence()&&FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX]->getColor())
			board->setMarker(TmpY+1, TmpX);
	}
}
bool King::makeMove(Board* board, int MouseX, int MouseY)
{
	if(board->getMarkers()[MouseY/128][MouseX/128])
	{
		if(board->getFigure(MouseY, MouseX)->getPresence())
		{
			if(board->getFigure(MouseY, MouseX)->getColor()!=this->getColor())
			{
				board->getFigure(MouseY, MouseX)->setPresence(false);
				this->setPosition(MouseX, MouseY);
				return true;
			}
		}
		else
		{
			this->setPosition(MouseX, MouseY);
			return true;
		}
	}
	else
		return false;
}
