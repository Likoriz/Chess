#include "Game.h"

int main()
{
	RenderWindow window(VideoMode(1024, 1024), "It's chess game! (trust me)", Style::Close);
	window.setVerticalSyncEnabled(true);

	Game game;

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
		window.display();
	}

	return 0;
}