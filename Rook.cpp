#include "Rook.h"
#include "Board.h"

void Rook::checkMove(Figure***& FiguresOnBoard, Board* board)
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
}



/*int mas[8][8] = { 0 };
bool flag = false;
int TmpX = getPositionX() / 128;
int TmpY = getPositionY() / 128;
int i = TmpY;
int j = TmpX;
int offset = 1;
Figure* TmpP;


while (flag) {
	if ((i - offset) < 0)
		flag = false;
	else {
		if ((j - offset) < 0)
			flag = false;
		else {
			TmpP = board->getFigure((TmpX - offset) * 128, (TmpY - offset) * 128);
			if (TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor())) {
				board->setMarker(i - offset, j - offset);
				offset++;
			}
			else
				TmpP = board->getFigure((TmpX - offset) * 128, (TmpY - offset) * 128);
			if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())) {
				board->setMarker(i - offset, j - offset);
				flag = false;
			}
			else flag = false;
		}
	}

}
flag = true;
offset = 1;


while (flag) {
	if ((i - offset) < 0)
		flag = false;
	else {
		if ((j + offset) < 0)
			flag = false;
		else {
			TmpP = board->getFigure((TmpX + offset) * 128, (TmpY - offset) * 128);
			if (TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor())) {
				board->setMarker(i - offset, j + offset);
				offset++;
			}
			else
				TmpP = board->getFigure((TmpX + offset) * 128, (TmpY - offset) * 128);
			if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())) {
				board->setMarker(i - offset, j + offset);
				flag = false;
			}
			else flag = false;
		}
	}

}
flag = true;
offset = 1;

while (flag) {
	if ((i + offset) < 0)
		flag = false;
	else {
		if ((j - offset) < 0)
			flag = false;
		else {
			TmpP = board->getFigure((TmpX - offset) * 128, (TmpY + offset) * 128);
			if (TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor())) {
				board->setMarker(i + offset, j + offset);
				offset++;
			}
			else
				TmpP = board->getFigure((TmpX - offset) * 128, (TmpY + offset) * 128);
			if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())) {
				board->setMarker(i + offset, j + offset);
				flag = false;
			}
			else flag = false;
		}
	}

}
flag = true;
offset = 1;

while (flag) {
	if ((i + offset) < 0)
		flag = false;
	else {
		if ((j + offset) < 0)
			flag = false;
		else {
			TmpP = board->getFigure((TmpX + offset) * 128, (TmpY + offset) * 128);
			if (TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor())) {
				board->setMarker(i + offset, j + offset);
				offset++;
			}
			else
				TmpP = board->getFigure((TmpX + offset) * 128, (TmpY + offset) * 128);
			if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor())) {
				board->setMarker(i + offset, j + offset);
				flag = false;
			}
			else flag = false;
		}
	}

}
flag = true;
offset = 1;

}*/

