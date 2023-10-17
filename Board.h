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

class Game;

class Board
{
private:
	RectangleShape* board;
	Figure*** figuresOnBoard = { nullptr };
	Color color;
	Figure* ChosenFigure=nullptr;
	int **mas;
	bool turn=WHITE;
public:
	//��������� ������ ��� ����� � �����
	Board();
	//��������� ����� � �����
	void drawBoard(RenderWindow& window);
	void chooseFigure(int MouseX, int MouseY, Board* board);
	void resetChoice();
	void ChangeTurn();
	Figure* getFigure(float _x, float _y);
	void setMarker(int i, int j);
	//����������� ����� � �����
	void setupBoard();
	int** getMarkers();
	void SetChosenFigure(Figure* fig);
	Figure* GetChosenFigure();
	bool KingsAreAlive();

	//��������� ���������� � ���������� ����� �� �����
};