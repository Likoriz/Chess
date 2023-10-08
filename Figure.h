#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "1S_OOPLab1.h"

using namespace sf;
using namespace std;

class Figure
{
private:
	float x, y;
	Texture figureTexture;
	Sprite figureSprite;
	int type;
	int color;
	bool isOnBoard = false;
	int amount;
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

	//�������� ��������� ����� ��� ��������� ������ (��������� ��������� ������)
	virtual void makeMove();
};


