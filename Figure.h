#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "1S_OOPLab1.h"

using namespace sf;
using namespace std;

class Board;

class Figure
{
private:
	float x, y;
	Texture figureTexture;
	Sprite figureSprite;
	int type;
	int color;
	bool isOnBoard = false;
public:
	//��������� ���������� � ���������� ������ �� �����
	void setPresence(bool flag);

	//��������� ���������� � ���������� ������ �� �����
	bool getPresence();
	
	//��������� �������� ������
	void setTexture();
	
	//��������� ���� ������
	void setType(int _type);

	//��������� ������� ������ �� �����
	void setPosition(float _x, float _y);

	//��������� ����� ������
	void setColor(int _color);

	//��������� �������� ������
	Sprite getTexture();

	float getPositionX();
	float getPositionY();

	int getType();
	
	int getColor();

	//��������� ������� ������ �� X
	float getSizeX();

	//��������� ������� ������ �� Y
	float getSizeY();

	//�������� ��������� ����� ��� ��������� ������ (��������� ��������� ������)
	virtual void checkMove(Figure***& FiguresOnBoard, Board* board);
	virtual bool makeMove(Board* board, int MouseX, int MouseY);
};


