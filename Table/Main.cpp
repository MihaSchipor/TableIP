#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(450, 350), "Table", sf::Style::Close | sf::Style::Resize);
	sf::RectangleShape player(sf::Vector2f(450.0f, 350.0f));
															//player.setFillColor(sf::Color::Blue);
	player.setPosition(0.0f, 0.0f);
	sf::Texture playerTexture;
	playerTexture.loadFromFile("board1.png");
	player.setTexture(&playerTexture);

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
				//case sf::Event::Resized:
				//	printf("New window width: %i New window height: %i\n", evnt.size.width, evnt.size.height);
				//break;
				//case sf::Event::TextEntered:
				//if (evnt.text.unicode < 128)
				//{
				//printf("%c", evnt.text.unicode);
				//}
			}
		}

		//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		//{
		//	player.move(-0.1f, 0.0f);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		//{
		//player.move(0.1f, 0.0f);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		//{
		//	player.move(0.0f, -0.1f);
		//}
		//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		//{
		//player.move(0.0f, 0.1f);
		//	}
		window.clear();
		window.draw(player);
		window.display();
	}
	return 0;
}