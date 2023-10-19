#include "Queen.h"
#include "Board.h"


void Queen::checkMove(Figure***& FiguresOnBoard, Board* board)
{
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



	for (int i = 1; i <= 7; i++) {
		if (TmpX + i < 8)
		{
			if (TmpY - i > -1)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX + i);
					//cout<<"3";
				}
			}
			if (TmpY + 1 < 8)
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
			if (TmpY - 1 > -1)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX - i);
					//cout<<"5";
				}
			}
			if (TmpY + 1 < 8)
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
			if (TmpY - 1 > -1)
			{
				TmpP = board->getFigure((TmpX + i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX + i);
					//cout<<"3";
				}
			}
			if (TmpY + 1 < 8)
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
			if (TmpY - 1 > -1)
			{
				TmpP = board->getFigure((TmpX - i) * 128, (TmpY - i) * 128);
				if (!TmpP->getPresence() || (board->getFigure(TmpX * 128, TmpY * 128)->getColor() != TmpP->getColor()))
				{
					board->setMarker(TmpY - i, TmpX - i);
					//cout<<"5";
				}
			}
			if (TmpY + 1 < 8)
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



	/*bool flag = false;
	int size_x = getPositionX() / 128;
	int size_y = getPositionY() / 128;
	int i = size_y;
	int j = size_x;
	int offset = 1;
	Figure* TmpP = { nullptr };
	int tmp = TmpP->getColor();
	while (flag) {
		if ((i - offset) < 0)
			flag = false;
		else {
			if (not board->getFigure(i - offset, j)->getPresence()) {
				board->setMarker(i - offset, j);
				offset++;
			}
			else
				if (board->getFigure(i - offset, j)->getColor() != tmp) {
					board->setMarker(i - offset, j);
					flag = false;
				}
				else flag = false;
		}
	}

	flag = true;
	offset = 1;

	while (flag) {
		if ((i + offset) < 0)
			flag = false;
		else {
			if (not board->getFigure(i + offset, j)->getPresence()) {
				board->setMarker(i + offset, j);
				offset++;
			}
			else
				if (board->getFigure(i + offset, j)->getColor() != tmp) {
					board->setMarker(i + offset, j);
					flag = false;
				}
				else flag = false;
		}
	}

	flag = true;
	offset = 1;

	while (flag) {
		if ((j + offset) < 0)
			flag = false;
		else {
			if (not board->getFigure(i, j + offset)->getPresence()) {
				board->setMarker(i, j + offset);
				offset++;
			}
			else
				if (board->getFigure(i, j + offset)->getColor() != tmp) {
					board->setMarker(i, j + offset);
					flag = false;
				}
				else flag = false;
		}
	}

	flag = true;
	offset = 1;

	while (flag) {
		if ((j - offset) < 0)
			flag = false;
		else {
			if (not board->getFigure(i, j - offset)->getPresence()) {
				board->setMarker(i, j - offset);
				offset++;
			}
			else
				if (board->getFigure(i, j - offset)->getColor() != tmp) {
					board->setMarker(i, j - offset);
					flag = false;
				}
				else flag = false;
		}
	}

	while (flag) {
		if ((i - offset) < 0)
			flag = false;
		else {
			if ((j - offset) < 0)
				flag = false;
			else {
				if (not board->getFigure(i - offset, j - offset)->getPresence()) {
					board->setMarker(i - offset, j - offset);
					offset++;
				}
				else
					if (board->getFigure(i - offset, j - offset)->getColor() != tmp) {
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
		if ((i + offset) < 0)
			flag = false;
		else {
			if ((j - offset) < 0)
				flag = false;
			else {
				if (not board->getFigure(i + offset, j - offset)->getPresence()) {
					board->setMarker(i + offset, j - offset);
					offset++;
				}
				else
					if (board->getFigure(i + offset, j - offset)->getColor() != tmp) {
						board->setMarker(i + offset, j - offset);
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
				if (not board->getFigure(i + offset, j + offset)->getPresence()) {
					board->setMarker(i + offset, j + offset);
					offset++;
				}
				else
					if (board->getFigure(i + offset, j + offset)->getColor() != tmp) {
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
		if ((i - offset) < 0)
			flag = false;
		else {
			if ((j + offset) < 0)
				flag = false;
			else {
				if (not board->getFigure(i - offset, j + offset)->getPresence()) {
					board->setMarker(i - offset, j + offset);
					offset++;
				}
				else
					if (board->getFigure(i - offset, j + offset)->getColor() != tmp) {
						board->setMarker(i - offset, j + offset);
						flag = false;
					}
					else flag = false;
			}
		}
	}*/
}