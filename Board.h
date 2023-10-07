#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Figure.h"

using namespace sf;
using namespace std;

class Figure;

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

	//����������� ����� � �����
	void setupBoard();

	//����� ������ �� �����, ����� ��������� ������ ��� ����, �����������
	void makeMove();

	//��������� ���������� � ���������� ����� �� �����
	int amountOfFigures();
};