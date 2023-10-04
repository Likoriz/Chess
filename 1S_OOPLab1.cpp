#include "Game.h"

int main()
{
	RenderWindow window(VideoMode(1024, 1024), "It's chess game! (trust me)", Style::Close);
	window.setVerticalSyncEnabled(true);

	Game game;
	Texture chessPic;
	chessPic.loadFromFile("chess.png");
	Sprite chess;
	chess.setTexture(chessPic);

	while (window.isOpen())
	{
		game.startGame();

		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			}
		}


		window.clear({ 255, 255, 255 });
		game.drawAll(window);
		window.draw(chess);
		window.display();
	}

	return 0;
}