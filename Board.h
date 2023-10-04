#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class Figure;

class Board
{
private:
	RectangleShape* board;
	Figure*** figuresOnBoard;
	Color color;
public:
	Board();
	void drawBoard(RenderWindow& window);//��������� ����� � �����
	void makeMove();//����� ������ �� �����, ����� ��������� ������ ��� ����, �����������
	void setupBoard();//����������� ����� � �����
};