#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
double cords[9];
int choose;

class dShape
{
public:
	CircleShape shape;
	double x;
	double y;
	dShape(double x, double y,float R)
	{
		this->x = x;
		this->y = y;
		shape.setRadius(R);
		shape.setFillColor(sf::Color::Green);
		shape.setPosition(this->x, this->y);
	}
};


double func()
{
	for (int i = 0; i <= 9; i++)
	{
		cin >> cords[i];
	}
	return *cords;
}

void draw()
{
	dShape f1(cords[0], cords[1], 100);
	dShape f2(cords[2], cords[3], 67);
	dShape f3(cords[4], cords[5], 77);
	dShape f4(cords[6], cords[7], 21);
	dShape f5(cords[8], cords[9], 12);
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
			window.draw(f1.shape);
			window.draw(f2.shape);
			window.draw(f3.shape);
			window.draw(f4.shape);
			window.draw(f5.shape);
			window.display();
	}
}
int main()
{
	

	setlocale(LC_ALL, "RU");
	cout << "Enter x and y 5 times: " << endl;
	func();
	cout << "1. Draw.";
	cout << "2. Enter again.\n";

	cin >> choose;
	if (choose == 1) draw();
		else if (choose == 2)
		{
		cout << "Enter COrds: \n";
			while (choose != 1)
			{
				func();
				cout << "1. Draw.";
				cout << "2. Enter again.\n";
				cin >> choose;
			}
			draw();
		}

	return 0;
}
