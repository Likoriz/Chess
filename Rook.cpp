#include "Rook.h"

void Rook::makeMove()
{

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

}

