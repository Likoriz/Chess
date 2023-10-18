#include "Pawn.h"
#include "board.h"
void Pawn::checkMove(Figure***& FiguresOnBoard, Board* board)
{
	int TmpX=getPositionX()/128;
	int TmpY=getPositionY()/128;
	if(!this->getColor())
	{
		if(TmpY-1>-1)
		{
			if(!FiguresOnBoard[TmpY-1][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-1][TmpX]->getColor())
				board->setMarker(TmpY-1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY-2>-1)
			{
				if(!FiguresOnBoard[TmpY-2][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY-2][TmpX]->getColor())
					board->setMarker(TmpY-2, TmpX);
			}
		}
	}
	else
	{
		if(TmpY+1<8)
		{
			if(!FiguresOnBoard[TmpY+1][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+1][TmpX]->getColor())
				board->setMarker(TmpY+1, TmpX);
		}
		if(!(this->hasDidFirstMove()))
		{
			if(TmpY+2<8)
			{
				if(!FiguresOnBoard[TmpY+2][TmpX]->getPresence()||FiguresOnBoard[TmpY][TmpX]->getColor()!=FiguresOnBoard[TmpY+2][TmpX]->getColor())
					board->setMarker(TmpY+2, TmpX);
			}
		}
	}
	
	
}





bool Pawn::makeMove(Board* board, int MouseX, int MouseY)
{
	int TmpX=MouseX/128;
	int TmpY=MouseY/128;
	if(board->getMarkers()[TmpY][TmpX])
	{
		if(!(this->hasDidFirstMove()))
			didFirstMove=true;
		Figure* target_fig = board->getFigure(MouseY, MouseX);
		Figure* tmp_fig = new Figure;
		tmp_fig->setPosition(target_fig->getPositionX(), target_fig->getPositionY());
		tmp_fig->setPresence(target_fig->getPresence());
		target_fig->setPosition(this->getPositionX(), this->getPositionY());
		target_fig->setPresence(this->getPresence());
		cout<<this->getPresence();
		this->setPosition(tmp_fig->getPositionX(), tmp_fig->getPositionY());
		this->setPresence(tmp_fig->getPresence());
		cout << this->getPresence();
		if (target_fig->getPresence())
			target_fig->setPresence(false);
		delete tmp_fig;
		return true;
	}
	else
		return false;
}
bool Pawn::hasDidFirstMove()
{
	return didFirstMove;
}