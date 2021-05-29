#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
int x, y;
int cords[9];
int choose;
int func()
{
	for (int i = 0; i <= 9; i++)
	{
		cin >> cords[i];
	}
	return *cords;
}
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Enter x and y 5 times: "<<endl;
	func();
	cout << "1. Нарисовать.";
	cout << "2. Ввести заново.";

	cin >> choose;
	if (choose == 1)
	{
		sf::CircleShape shape(100.f);
		sf::CircleShape shape1(50.f);
		sf::CircleShape shape2(77.f);
		sf::CircleShape shape3(13.f);
		sf::CircleShape shape4(24.f);
		shape.setFillColor(sf::Color::Green);
		shape1.setFillColor(sf::Color::Black);
		shape2.setFillColor(sf::Color::Blue);
		shape3.setFillColor(sf::Color::Red);
		shape4.setFillColor(sf::Color::Magenta);
		shape.setPosition(cords[0],cords[1]);
		shape1.setPosition(cords[2], cords[3]);
		shape2.setPosition(cords[4], cords[5]);
		shape3.setPosition(cords[6], cords[7]);
		shape4.setPosition(cords[8], cords[9]);
		sf::RenderWindow window(sf::VideoMode(800, 800), "Lesson 1. kychka-pc.ru");

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();
			window.draw(shape);
			window.draw(shape1);
			window.draw(shape2);
			window.draw(shape3);
			window.draw(shape4);
			window.display();
		}
	}
	else if (choose == 2)
	{
		func();
	}
	
	
	return 0;
}
