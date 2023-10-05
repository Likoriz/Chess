#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"

using namespace sf;
using namespace std;

class Game
{
private:
	Board board;
	bool isStarted;
public:
	//Начало игры, вызов конструктора доски (выделение памяти для доски и фигур), расстановка фигур на доске
	Game();

	//Отрисовка всего в игре
	void drawAll(RenderWindow& window);

	//Если игра не начата, вызов конструктора игры
	void startGame();

	//Окончание игры
	void endGame();
};
