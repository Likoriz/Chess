#include "Pawn.h"
#include "board.h"
void Pawn::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	Figure* tmp_p;
	if(!this->getColor())
	{
		if(TmpY-1>-1)
		{
			tmp_p=board->getFigure(TmpX*128, (TmpY-1)*128);
			if(tmp_p && !tmp_p->getPresence())
				board->setMarker(TmpY-1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY-2>-1)
			{
				tmp_p=board->getFigure(TmpX*128, (TmpY-2)*128);
				if(tmp_p && !tmp_p->getPresence())
					board->setMarker(TmpY-2, TmpX);
			}
		}
		tmp_p=board->getFigure((TmpX-1)*128, (TmpY-1)*128);
		if(tmp_p&&tmp_p->getPresence()&&tmp_p->getColor()!=this->getColor())
		{
			board->setMarker(TmpY-1, TmpX-1);
		}
		tmp_p=board->getFigure((TmpX+1)*128, (TmpY-1)*128);
		if(tmp_p&&tmp_p->getPresence()&&tmp_p->getColor()!=this->getColor())
		{
			board->setMarker(TmpY-1, TmpX+1);
		}
	}
	else
	{
		if(TmpY+1<8)
		{
			tmp_p=board->getFigure(TmpX*128, (TmpY+1)*128);
			if(tmp_p&&!tmp_p->getPresence())
				board->setMarker(TmpY+1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY+2<8)
			{
				tmp_p=board->getFigure(TmpX*128, (TmpY+2)*128);
				if(tmp_p&&!tmp_p->getPresence())
					board->setMarker(TmpY+2, TmpX);
			}
		}
		tmp_p=board->getFigure((TmpX-1)*128, (TmpY+1)*128);
		if(tmp_p&&tmp_p->getPresence()&&tmp_p->getColor()!=this->getColor())
		{
			board->setMarker(TmpY+1, TmpX-1);
		}
		tmp_p=board->getFigure((TmpX+1)*128, (TmpY+1)*128);
		if(tmp_p&&tmp_p->getPresence()&&tmp_p->getColor()!=this->getColor())
		{
			board->setMarker(TmpY+1, TmpX+1);
		}
	}
	
	
}

void Pawn::firstMoveIsDone()
{
	this->didFirstMove=true;
}

bool Pawn::hasDidFirstMove()
{
	return didFirstMove;
}