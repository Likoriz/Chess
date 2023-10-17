#include "Bishop.h"
#include "Board.h"

void Bishop::checkMove(Board* board, Figure* figure)
{
	//int mas[8][8] = { 0 };
	bool flag = false;
	float size_x = figure->getPositionX();
	float size_y = figure->getPositionY();
	float i = size_y / 128.f;
	float j = size_x / 128.f;
	float offset = 1.f;
	int tmp = figure->getColor();


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
	offset = 1.f;

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
	offset = 1.f;

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
	offset = 1.f;

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

	}
}


bool Bishop::makeMove(Board* board, int MouseX, int MouseY)
{
	if (board->getMarkers()[MouseY / 128][MouseX / 128])
	{
		if (board->getFigure(MouseY, MouseX)->getPresence())
		{
			if (board->getFigure(MouseY, MouseX)->getColor() != this->getColor())
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
