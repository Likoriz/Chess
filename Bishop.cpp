#include "Bishop.h"
#include "Board.h"

void Bishop::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	/*bool flag=false;
	int size_x=getPositionX()/128;
	int size_y=getPositionY()/128;
	int i=size_y;
	int j=size_x;
	int offset= 1;
	Figure* TmpP;
	int tmp=TmpP->getColor();*/


	int TmpX = getPositionX() / 128;
	int TmpY = getPositionY() / 128;
	Figure* TmpP;
	for (int i = 1; i <= 7; i++) {
		if (TmpX + i < 8)
		{
			TmpP = board->getFigure((TmpX + i) * 128, (TmpY) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY, TmpX + i);
				}
				break;
			}
			board->setMarker(TmpY, TmpX+i);
		}
	}
	for (int i = 1; i <= 7; i++) {
		if (TmpX - i > -1)
		{
			TmpP = board->getFigure((TmpX - i) * 128, (TmpY) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY, TmpX - i);
				}
				break;
			}
			board->setMarker(TmpY, TmpX - i);
		}
	}
	for (int i = 1; i <= 7; i++) {
		if (TmpY - i > -1)
		{
			TmpP = board->getFigure((TmpX) * 128, (TmpY - i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY - i, TmpX);
				}
				break;
			}
			board->setMarker(TmpY - i, TmpX);
		}
	}
	for (int i = 1; i <= 7; i++) {
		if (TmpY + i < 8)
		{
			TmpP = board->getFigure((TmpX) * 128, (TmpY + i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY + i, TmpX);
				}
				break;
			}
			board->setMarker(TmpY + i, TmpX);
		}
	}
}












