#include "Knight.h"
#include "board.h"
void Knight::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	//cout<<"a";
	Figure* TmpP;
	if(TmpX+2<8)
	{
		if(TmpY-1>-1)
		{
			TmpP=board->getFigure((TmpX+2)*128, (TmpY-1)*128);
			if(!TmpP->getPresence() || (board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY-1, TmpX+2);
				//cout<<"1";
			}
		}
		if(TmpY+1<8)
		{
			TmpP=board->getFigure((TmpX+2)*128, (TmpY+1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY+1, TmpX+2);
				//cout<<"2";
			}

		}
	}
	if(TmpX+1<8)
	{
		if(TmpY-2>-1)
		{
			TmpP=board->getFigure((TmpX+1)*128, (TmpY-2)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY-2, TmpX+1);
				//cout<<"3";
			}
		}
		if(TmpY+2<8)
		{
			TmpP=board->getFigure((TmpX+1)*128, (TmpY+2)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY+2, TmpX+1);
				//cout<<"4";
			}
		}
	}
	if(TmpX-2>-1)
	{
		
		if(TmpY-1>-1)
		{
			TmpP=board->getFigure((TmpX-2)*128, (TmpY-1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY-1, TmpX-2);
				//cout<<"5";
			}
		}
		if(TmpY+1<8)
		{
			TmpP=board->getFigure((TmpX-2)*128, (TmpY+1)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY+1, TmpX-2);
				//cout<<"6";
			}
		}
	}
	if(TmpX-1>-1)
	{
		//cout<<"a";
		if(TmpY-2>-1)
		{
			TmpP=board->getFigure((TmpX-1)*128, (TmpY-2)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY-2, TmpX-1);
				//cout<<"7";
			}
		}
		if(TmpY+2<8)
		{
			TmpP=board->getFigure((TmpX-1)*128, (TmpY+2)*128);
			if(!TmpP->getPresence()||(board->getFigure(TmpX*128, TmpY*128)->getColor()!=TmpP->getColor()))
			{
				board->setMarker(TmpY+2, TmpX-1);
				//cout<<"8";
			}
		}
	}
}
