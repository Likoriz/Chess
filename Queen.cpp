#include "Queen.h"
#include "Board.h"


void Queen::checkMove(Board& board, Figure& figure)
{
	bool flag=false;
	float size_x=figure.getPositionX();
	float size_y=figure.getPositionY();
	float i=size_y/128.f;
	float j=size_x/128.f;
	float offset=1.f;
	int tmp=figure.getColor();
	while(flag) {
		if((i-offset)<0)
			flag=false;
		else {
			if(not board.getFigure(i-offset, j)->getPresence()) {
				board.setMarker(i-offset, j);
				offset++;
			}
			else
				if(board.getFigure(i-offset, j)->getColor()!=tmp) {
					board.setMarker(i-offset, j);
					flag=false;
				}
				else flag=false;
		}
	}

	flag=true;
	offset=1;

	while(flag) {
		if((i+offset)<0)
			flag=false;
		else {
			if(not board.getFigure(i+offset, j)->getPresence()) {
				board.setMarker(i+offset, j);
				offset++;
			}
			else
				if(board.getFigure(i+offset, j)->getColor()!=tmp) {
					board.setMarker(i+offset, j);
					flag=false;
				}
				else flag=false;
		}
	}

	flag=true;
	offset=1;

	while(flag) {
		if((j+offset)<0)
			flag=false;
		else {
			if(not board.getFigure(i, j+offset)->getPresence()) {
				board.setMarker(i, j+offset);
				offset++;
			}
			else
				if(board.getFigure(i, j+offset)->getColor()!=tmp) {
					board.setMarker(i, j+offset);
					flag=false;
				}
				else flag=false;
		}
	}

	flag=true;
	offset=1;

	while(flag) {
		if((j-offset)<0)
			flag=false;
		else {
			if(not board.getFigure(i, j-offset)->getPresence()) {
				board.setMarker(i, j-offset);
				offset++;
			}
			else
				if(board.getFigure(i, j-offset)->getColor()!=tmp) {
					board.setMarker(i, j-offset);
					flag=false;
				}
				else flag=false;
		}
	}

	while(flag) {
		if((i-offset)<0)
			flag=false;
		else {
			if((j-offset)<0)
				flag=false;
			else {
				if(not board.getFigure(i-offset, j-offset)->getPresence()) {
					board.setMarker(i-offset, j-offset);
					offset++;
				}
				else
					if(board.getFigure(i-offset, j-offset)->getColor()!=tmp) {
						board.setMarker(i-offset, j-offset);
						flag=false;
					}
					else flag=false;
			}
		}

	}
	flag=true;
	offset=1;

	while(flag) {
		if((i+offset)<0)
			flag=false;
		else {
			if((j-offset)<0)
				flag=false;
			else {
				if(not board.getFigure(i+offset, j-offset)->getPresence()) {
					board.setMarker(i+offset, j-offset);
					offset++;
				}
				else
					if(board.getFigure(i+offset, j-offset)->getColor()!=tmp) {
						board.setMarker(i+offset, j-offset);
						flag=false;
					}
					else flag=false;
			}
		}

	}
	flag=true;
	offset=1;

	while(flag) {
		if((i+offset)<0)
			flag=false;
		else {
			if((j+offset)<0)
				flag=false;
			else {
				if(not board.getFigure(i+offset, j+offset)->getPresence()) {
					board.setMarker(i+offset, j+offset);
					offset++;
				}
				else
					if(board.getFigure(i+offset, j+offset)->getColor()!=tmp) {
						board.setMarker(i+offset, j+offset);
						flag=false;
					}
					else flag=false;
			}
		}

	}
	flag=true;
	offset=1;

	while(flag) {
		if((i-offset)<0)
			flag=false;
		else {
			if((j+offset)<0)
				flag=false;
			else {
				if(not board.getFigure(i-offset, j+offset)->getPresence()) {
					board.setMarker(i-offset, j+offset);
					offset++;
				}
				else
					if(board.getFigure(i-offset, j+offset)->getColor()!=tmp) {
						board.setMarker(i-offset, j+offset);
						flag=false;
					}
					else flag=false;
			}
		}

