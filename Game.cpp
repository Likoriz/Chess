#include "Game.h"

Game::Game()
{
	isStarted = true;
	Board();
	board.setupBoard();
}

void Game::startGame()
{
	if (!isStarted)
		Game();
}

void Game::endGame()
{

}

void Game::drawAll(RenderWindow& window)
{
	board.drawBoard(window);
}