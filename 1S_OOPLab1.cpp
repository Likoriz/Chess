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
			case Event::MouseButtonPressed:
				if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
					//cout<<event.mouseButton.x<<" "<<event.mouseButton.y<<"\n"<<event.mouseButton.x/128<<" "<<event.mouseButton.y/128<<"\n";
					game.GetBoardP()->chooseFigure(event.mouseButton.x, event.mouseButton.y, game.GetBoardP());
				}
				else 
					if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
					{
						game.GetBoardP()->resetChoice();
					}
			}

			if(!game.GetBoard().KingsAreAlive())
			{
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