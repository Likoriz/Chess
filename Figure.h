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
	//Установка информации о нахождении фигуры на доске
	void setPresence(bool flag);

	//Получение информации о нахождении фигуры на доске
	bool getPresence();
	
	//Установка текстуры фигуры
	void setTexture();
	
	//Установка типа фигуры
	void setType(int _type);

	//Установка позиции фигуры на доске
	void setPosition(float _x, float _y);

	//Установка цвета фигуры
	void setColor(int _color);

	//Получение текстуры фигуры
	Sprite getTexture();

	//Проверка возможных ходов для выбранной фигуры (подсветка свободных клеток)
	virtual void makeMove();
};


