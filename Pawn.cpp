#include "Pawn.h"
#include "board.h"
void Pawn::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	if(!this->getColor())
	{
		if(TmpY-1>-1)
		{
			if(!FiguresOnBoard[TmpY-1][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX]->getColor())
				board->setMarker(TmpY-1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY-2>-1)
			{
				if(!FiguresOnBoard[TmpY-2][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-2][TmpX]->getColor())
					board->setMarker(TmpY-2, TmpX);
			}
		}
	}
	else
	{
		if(TmpY+1>8)
		{
			if(!FiguresOnBoard[TmpY+1][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX]->getColor())
				board->setMarker(TmpY+1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY+2>8)
			{
				if(!FiguresOnBoard[TmpY+2][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+2][TmpX]->getColor())
					board->setMarker(TmpY+2, TmpX);
			}
		}
	}
	
	
}
bool Pawn::makeMove(Board* board, int MouseX, int MouseY)
{
	int TmpX=MouseX/128;
	int TmpY=MouseY/128;
	if(board->getMarkers()[TmpY][TmpX])
	{
		if(!(this->hasDidFirstMove()))
			didFirstMove=true;
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
			this->setPosition(TmpX*128, TmpY*128);
			return true;
		}
	}
	else
		return false;
}
bool Pawn::hasDidFirstMove()
{
	return didFirstMove;
}