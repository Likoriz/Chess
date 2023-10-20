#include "Queen.h"
#include "Board.h"


void Queen::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX = getPositionX() / 128;
	int TmpY = getPositionY() / 128;
	int cnt = 0;
	Figure* TmpP;

	for (int i = 1; i <= 7; i++) {
		if (TmpX + i < 8)
		{
			TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (!TmpP->getPresence() || board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY - i, TmpX + i);
				}
				break;
			}
			if (TmpY - i > -1)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX + i);
					//cout<<"3";
				}
			}
			if (TmpY + i < 8)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY + i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY + i, TmpX + i);
					//cout<<"4";
				}
			}
		}
	}
	for (int i = 1; i <= 7; i++) {
		if (TmpX - i > -1)
		{

			TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY - i, TmpX - i);
				}
				break;
			}

			if (TmpY - i > -1)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX - i);
					//cout<<"5";
				}
			}
			if (TmpY + i < 8)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY + i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY + i, TmpX - i);
					//cout<<"6";
				}
			}
		}
	}

	for (int i = 1; i <= 7; i++) {
		if (TmpX + i < 8)
		{

			TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY - i, TmpX + i);
				}
				break;
			}

			if (TmpY - i > -1)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX + i);
					//cout<<"3";
				}
			}
			if (TmpY + i < 8)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY + i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY + i, TmpX + i);
					//cout<<"4";
				}
			}
		}
	}

	for (int i = 1; i <= 7; i++) {
		if (TmpX - i > -1)
		{

			TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
			if (TmpP && TmpP->getPresence())
			{
				if (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())
				{
					board->setMarker(TmpY - i, TmpX - i);
				}
				break;
			}

			if (TmpY - i > -1)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX - i);
					//cout<<"5";
				}
			}
			if (TmpY + i < 8)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY + i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY + i, TmpX - i);
					//cout<<"6";
				}
			}
		}
	}

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
			board->setMarker(TmpY, TmpX + i);
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