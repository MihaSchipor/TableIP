#include <SFML\Graphics.hpp>
#include <time.h>
using namespace sf;
/*
//int size1 = 30;
//int size2 = 35;
Sprite f[30]; //figures
int n = 0;
int board[12][13] =
{ 1,0,0,0,2,0,0,3,0,0,0,0,4,
 5,0,0,0,6,0,0,7,0,0,0,0,8,
 9,0,0,0,10,0,0,11,0,0,0,0,0,
 12,0,0,0,0,0,0,13,0,0,0,0,0,
 14,0,0,0,0,0,0,15,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,
 16,0,0,0,0,0,0,17,0,0,0,0,0,
 18,0,0,0,0,0,0,19,0,0,0,0,0,
 20,0,0,0,21,0,0,22,0,0,0,0,0,
 23,0,0,0,24,0,0,25,0,0,0,0,26,
 27,0,0,0,28,0,0,29,0,0,0,0,30 };

void loadPosition()
{
	int k = 0;
	for(int i=0;i<12;i++)
		for (int j = 0; j < 13; j++)
		{
			int n = board[i][j];
			if (n == 1) {
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(47, 11);
				k++;
			}
			if (n == 5)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(47, 39);
				k++;
			}
			if (n == 9)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(47, 67);
				k++;
			}
			if (n == 12)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(47, 95);
				k++;
			}
			if (n == 14)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(47, 123);
				k++;
			}
			if (n == 4)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(375, 11);
				k++;
			}
			if (n == 8)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(375, 39);
				k++;
			}
			if (n == 21)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(156, 250);
				k++;
			}
			if (n == 24)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(156, 278);
				k++;
			}
			if (n == 28)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(156, 306);
				k++;
			}
			if (n == 17)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(266, 194);
				k++;
			}
			if (n == 19)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(266, 222);
				k++;
			}
			if (n == 22)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(266, 250);
				k++;
			}
			if (n == 25)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(266, 278);
				k++;
			}
			if (n == 29)
			{
				f[k].setTextureRect(IntRect(431, 432, 30, 35));
				f[k].setPosition(266, 306);
				k++;
			}
		}
}
*/
int main()
{
	RenderWindow window(VideoMode(450, 350), "Table", Style::Close | Style::Resize);
	RectangleShape player(Vector2f(450.0f, 350.0f));
															//player.setFillColor(sf::Color::Blue);
	player.setPosition(0.0f, 0.0f);
	Texture playerTexture;
	playerTexture.loadFromFile("board.png");
	player.setTexture(&playerTexture);

	RectangleShape player1(Vector2f(30.0f, 35.0f));     //prima neagra dreapta jos
	//player.setFillColor(sf::Color::Blue);
	player1.setPosition(374.0f, 304.0f);
	Texture playerTexture1;
	playerTexture1.loadFromFile("blackBall.png");
	player1.setTexture(&playerTexture1);
		
	RectangleShape player0(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player0.setPosition(374.0f, 276.0f);
	Texture playerTexture0;
	playerTexture0.loadFromFile("blackBall.png");
	player0.setTexture(&playerTexture0);

	RectangleShape player00(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player00.setPosition(46.0f, 304.0f);
	Texture playerTexture00;
	playerTexture00.loadFromFile("blackBall.png");
	player00.setTexture(&playerTexture00);

	RectangleShape player17(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player17.setPosition(46.0f, 276.0f);
	Texture playerTexture17;
	playerTexture17.loadFromFile("blackBall.png");
	player17.setTexture(&playerTexture17);

	RectangleShape player18(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player18.setPosition(46.0f, 248.0f);
	Texture playerTexture18;
	playerTexture18.loadFromFile("blackBall.png");
	player18.setTexture(&playerTexture18);

	RectangleShape player19(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player19.setPosition(46.0f, 220.0f);
	Texture playerTexture19;
	playerTexture19.loadFromFile("blackBall.png");
	player19.setTexture(&playerTexture19);

	RectangleShape player20(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player20.setPosition(46.0f, 192.0f);
	Texture playerTexture20;
	playerTexture20.loadFromFile("blackBall.png");
	player20.setTexture(&playerTexture20);

	RectangleShape player21(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player21.setPosition(266.0f, 11.0f);
	Texture playerTexture21;
	playerTexture21.loadFromFile("blackBall.png");
	player21.setTexture(&playerTexture21);

	RectangleShape player22(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player22.setPosition(266.0f, 39.0f);
	Texture playerTexture22;
	playerTexture22.loadFromFile("blackBall.png");
	player22.setTexture(&playerTexture22);

	RectangleShape player23(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player23.setPosition(266.0f, 67.0f);
	Texture playerTexture23;
	playerTexture23.loadFromFile("blackBall.png");
	player23.setTexture(&playerTexture23);

	RectangleShape player24(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player24.setPosition(266.0f, 95.0f);
	Texture playerTexture24;
	playerTexture24.loadFromFile("blackBall.png");
	player24.setTexture(&playerTexture24);

	RectangleShape player25(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player25.setPosition(266.0f, 123.0f);
	Texture playerTexture25;
	playerTexture25.loadFromFile("blackBall.png");
	player25.setTexture(&playerTexture25);

	RectangleShape player26(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player26.setPosition(156.0f, 11.0f);
	Texture playerTexture26;
	playerTexture26.loadFromFile("blackBall.png");
	player26.setTexture(&playerTexture26);

	RectangleShape player27(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player27.setPosition(156.0f, 39.0f);
	Texture playerTexture27;
	playerTexture27.loadFromFile("blackBall.png");
	player27.setTexture(&playerTexture27);

	RectangleShape player28(Vector2f(30.0f, 35.0f));
	//player.setFillColor(sf::Color::Blue);
	player28.setPosition(156.0f, 67.0f);
	Texture playerTexture28;
	playerTexture28.loadFromFile("blackBall.png");
	player28.setTexture(&playerTexture28);


	RectangleShape player2(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);                     //prima bila alba sus stanga
	player2.setPosition(47.0f, 11.0f);
	Texture playerTexture2;
	playerTexture2.loadFromFile("whiteBall.png");
	player2.setTexture(&playerTexture2);

	RectangleShape player3(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player3.setPosition(47.0f, 39.0f);
	Texture playerTexture3;
	playerTexture3.loadFromFile("whiteBall.png");
	player3.setTexture(&playerTexture3);


	RectangleShape player4(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player4.setPosition(47.0f, 67.0f);
	Texture playerTexture4;
	playerTexture4.loadFromFile("whiteBall.png");
	player4.setTexture(&playerTexture4);

	RectangleShape player5(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player5.setPosition(47.0f, 95.0f);
	Texture playerTexture5;
	playerTexture5.loadFromFile("whiteBall.png");
	player5.setTexture(&playerTexture5);

	RectangleShape player6(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player6.setPosition(47.0f, 123.0f);
	Texture playerTexture6;
	playerTexture6.loadFromFile("whiteBall.png");
	player6.setTexture(&playerTexture6);

	RectangleShape player7(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player7.setPosition(375.0f, 11.0f);
	Texture playerTexture7;
	playerTexture7.loadFromFile("whiteBall.png");
	player7.setTexture(&playerTexture7);

	RectangleShape player8(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player8.setPosition(375.0f,39.0f);
	Texture playerTexture8;
	playerTexture8.loadFromFile("whiteBall.png");
	player8.setTexture(&playerTexture8);

	RectangleShape player9(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player9.setPosition(156.0f, 306.0f);
	Texture playerTexture9;
	playerTexture9.loadFromFile("whiteBall.png");
	player9.setTexture(&playerTexture9);

	RectangleShape player10(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player10.setPosition(156.0f, 278.0f);
	Texture playerTexture10;
	playerTexture10.loadFromFile("whiteBall.png");
	player10.setTexture(&playerTexture10);

	RectangleShape player11(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player11.setPosition(156.0f, 250.0f);
	Texture playerTexture11;
	playerTexture11.loadFromFile("whiteBall.png");
	player11.setTexture(&playerTexture11);

	RectangleShape player12(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player12.setPosition(266.0f, 306.0f);
	Texture playerTexture12;
	playerTexture12.loadFromFile("whiteBall.png");
	player12.setTexture(&playerTexture12);

	RectangleShape player13(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player13.setPosition(266.0f, 278.0f);
	Texture playerTexture13;
	playerTexture13.loadFromFile("whiteBall.png");
	player13.setTexture(&playerTexture13);

	RectangleShape player14(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player14.setPosition(266.0f, 250.0f);
	Texture playerTexture14;
	playerTexture14.loadFromFile("whiteBall.png");
	player14.setTexture(&playerTexture14);

	RectangleShape player15(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player15.setPosition(266.0f, 222.0f);
	Texture playerTexture15;
	playerTexture15.loadFromFile("whiteBall.png");
	player15.setTexture(&playerTexture15);

	RectangleShape player16(Vector2f(28.0f, 32.0f));
	//player.setFillColor(sf::Color::Blue);
	player16.setPosition(266.0f, 194.0f);
	Texture playerTexture16;
	playerTexture16.loadFromFile("whiteBall.png");
	player16.setTexture(&playerTexture16);

	while (window.isOpen())
	{
		Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
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
		window.draw(player1);
		window.draw(player0);
		window.draw(player00);
		window.draw(player2);
		window.draw(player3);
		window.draw(player4);
		window.draw(player5);
		window.draw(player6);
		window.draw(player7);
		window.draw(player8);
		window.draw(player9);
		window.draw(player10);
		window.draw(player11);
		window.draw(player12);
		window.draw(player13);
		window.draw(player14);
		window.draw(player15);
		window.draw(player16);
		window.draw(player17);
		window.draw(player18);
		window.draw(player19);
		window.draw(player20);
		window.draw(player21);
		window.draw(player22);
		window.draw(player23);
		window.draw(player24);
		window.draw(player25);
		window.draw(player26);
		window.draw(player27);
		window.draw(player28);
		window.display();
	}
	return 0; 
	/*RenderWindow window(VideoMode(1024, 768), "Table");

	Texture t1,t2,t3;
	t1.loadFromFile("whiteBall.png");
	t2.loadFromFile("blackBall.png");
	t3.loadFromFile("board.png");

	Sprite s(t1);
	Sprite t(t2);
	Sprite sBoard(t3);
	for (int i = 0; i < 30; i++) f[i].setTexture(t1);

	loadPosition();


	bool isMove = false;
	float dx = 0, dy = 0;

	while (window.isOpen())
	{
		Vector2i pos = Mouse::getPosition(window);
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();

			////drag and drop/////
			if(e.type == Event::MouseButtonPressed)
				if(e.key.code == Mouse::Left)
					for(int i=0;i<30;i++)
					if (f[i].getGlobalBounds().contains(pos.x, pos.y))
					{
						isMove = true;
						dx = pos.x - f[i].getPosition().x;
						dy = pos.y - f[i].getPosition().y;
					}

			if (e.type == Event::MouseButtonReleased)
				if (e.key.code == Mouse::Left)
					isMove = false;

		}

		if (isMove) f[n].setPosition(pos.x - dx, pos.y - dy);

		//////draw/////
		window.clear();
		window.draw(sBoard);
		for (int i = 0; i < 30; i++) window.draw(f[i]);
		window.display();
	}
	return 0;  */
}