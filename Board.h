#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"

using namespace sf;
using namespace std;

class Board
{
private:
	RectangleShape* board;
	Figure*** figuresOnBoard = { nullptr };
	Color color;
public:
	//��������� ������ ��� ����� � �����
	Board();
	//��������� ����� � �����
	void drawBoard(RenderWindow& window);
	Figure* chooseFigure();
	//����������� ����� � �����
	void setupBoard();
	//��������� ���������� � ���������� ����� �� �����
};