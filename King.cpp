#include "King.h"
#include "board.h"
void King::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	Figure* TmpP;
	if(TmpX+1<8)
	{
		TmpP=board->getFigure((TmpX+1)*128, (TmpY)*128);
		if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			board->setMarker(TmpY,TmpX+1);
		if(TmpY-1>-1)
		{
			TmpP=board->getFigure((TmpX+1)*128, (TmpY-1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
				board->setMarker(TmpY-1, TmpX+1);
		}
		if(TmpY+1<8)
		{
			TmpP=board->getFigure((TmpX+1)*128, (TmpY+1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
				board->setMarker(TmpY+1, TmpX+1);
		}
	}
	if(TmpX-1>-1)
	{
		TmpP=board->getFigure((TmpX-1)*128, (TmpY)*128);
		if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			board->setMarker(TmpY, TmpX-1);
		if(TmpY-1>-1)
		{
			TmpP=board->getFigure((TmpX-1)*128, (TmpY-1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
				board->setMarker(TmpY-1, TmpX-1);
		}
		if(TmpY+1<8)
		{
			TmpP=board->getFigure((TmpX-1)*128, (TmpY+1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
				board->setMarker(TmpY+1, TmpX-1);
		}
	}
	if(TmpY-1>-1)
	{
		TmpP=board->getFigure((TmpX)*128, (TmpY-1)*128);
		if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			board->setMarker(TmpY-1, TmpX);
	}
	if(TmpY+1<8)
	{
		TmpP=board->getFigure((TmpX)*128, (TmpY+1)*128);
		if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			board->setMarker(TmpY+1, TmpX);
	}
}

