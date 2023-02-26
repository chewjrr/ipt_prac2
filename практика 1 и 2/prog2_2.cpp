#include <iostream>
#include <locale>
#include "header2.h"

int main()
{
	setlocale(LC_NUMERIC, "en_EN.utf8");
	circle mas[3];

	for (int i = 0; i < 3; i++)
	{
		float r, x, y;
		std::cout << "num." << i + 1 << "enter radius coordinates of the center ";
		std::cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
	}

	for (int i = 0; i < 3; i++)
	{
		float a, b, c;
		std::cout << "num." << i + 1 << "enter sides ";
		std::cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) std::cout << "the triangle is described by a circle " << std::endl;
		else std::cout << "the triangle doesnt described by a circle " << std::endl;
		if (mas[i].triangle_in(a, b, c)) std::cout << "the triangle is inscribed in a circle" << std::endl;
		else std::cout << "the triangle doesnt inscribed in a circle" << std::endl;
	}

	for (int i = 0; i < 3; i++) {
		float x, y;
		std::cout << "enter center coordinates ";
		std::cin >> x >> y;
		if (mas[i].check_circle(x, y)) std::cout << "the circle intersects with " << i + 1 << " circle" << std::endl;
		else std::cout << "the circle doesnt intersects with " << i + 1 << " circle" << std::endl;
	}
	return 0;
}
