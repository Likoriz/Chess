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
	//for (int i = 1; i <= 7; i++) {
	if (TmpX + 1 < 8)
	{
		TmpP = board->getFigure((TmpX + 1) * 128, (TmpY) * 128);
		if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
			board->setMarker(TmpY, TmpX + 1);
	}
	//}
	//for (int i = 1; i <= 7; i++) {
	if (TmpX - 1 > -1)
	{
		TmpP = board->getFigure((TmpX - 1) * 128, (TmpY) * 128);
		if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
			board->setMarker(TmpY, TmpX - 1);
	}
	//}
	//for (int i = 1; i <= 7; i++) {
	if (TmpY - 1 > -1)
	{
		TmpP = board->getFigure((TmpX) * 128, (TmpY - 1) * 128);
		if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
			board->setMarker(TmpY - 1, TmpX);
	}
	//}
	//for (int i = 1; i <= 7; i++) {
	if (TmpY + 1 < 8)
	{
		TmpP = board->getFigure((TmpX) * 128, (TmpY + 1) * 128);
		if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
			board->setMarker(TmpY + 1, TmpX);
	}
}
//}
//	while (flag) {
//		if ((i+offset) < 0)
//			flag = false;
//		else {
//			if(TmpP->getPresence()||(not board->getFigure(i + offset, j)))
//			//if (not board->getFigure(i + offset, j)->getPresence()) 
//			{
//				board->setMarker(i + offset, j);
//				offset++;
//			}
//			else
//				if (!TmpP->getPresence() || (board->getFigure(i + offset, j)->getColor() != tmp))
//				//if (board->getFigure(i + offset, j)->getColor() != tmp) 
//				{
//					board->setMarker(i + offset, j);
//					flag = false;
//				}
//				else flag = false;
//		}
//	}
//
//	flag = true;
//	offset = 1;
//
//	while (flag) {
//		if ((j + offset) < 0)
//			flag = false;
//		else {
//			if (TmpP->getPresence() || (not board->getFigure(i, j+offset)))
//			//if (not board->getFigure(i, j + offset)->getPresence())
//			{
//				board->setMarker(i, j + offset);
//				offset++;
//			}
//			else
//				if (!TmpP->getPresence() || (board->getFigure(i, j+offset)->getColor() != tmp))
//				//if (board->getFigure(i, j + offset)->getColor() != tmp) 
//				{
//					board->setMarker(i, j + offset);
//					flag = false;
//				}
//				else flag = false;
//		}
//	}
//
//	flag = true;
//	offset = 1;
//
//	while (flag) {
//		if ((j - offset) < 0)
//			flag = false;
//		else {
//			if (TmpP->getPresence() || (not board->getFigure(i, j - offset)))
//			//if (not board->getFigure(i, j - offset)->getPresence()) 
//			{
//				board->setMarker(i, j - offset);
//				offset++;
//			}
//			else
//				if (!TmpP->getPresence() || (board->getFigure(i, j - offset)->getColor() != tmp))
//				//if (board->getFigure(i, j - offset)->getColor() != tmp) 
//				{
//					board->setMarker(i, j - offset);
//					flag = false;
//				}
//				else flag = false;
//		}
//	}
//
//}


