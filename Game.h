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
	Game();
	void drawAll(RenderWindow& window);
	void startGame();
	void endGame();
};
