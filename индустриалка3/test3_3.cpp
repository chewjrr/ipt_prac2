#include <iostream>
#include "header3_3.h"

int main() {
	rational a, b, c;
	int a1, a2, b1, b2;
	std::cout << "enter the first fraction separated by a space: \n";
	std::cin >> a1 >> a2;
	rational a(a1, a2);
	a.set(a1, a2);
	std::cout << "enter the second fraction separated by a space: \n";
	std::cin >> b1 >> b2;
	rational b(b1, b2);
	b.set(b1, b2);
	c = a + b;
	std::cout << c << endl;
	c.set(0, 1);
	c = a - b;
	std::cout << c << endl;
	a++;
	std::cout << a;
	std::cout << a == b << endl;
	std::cout << a > c << endl;
	a = c - b;
	std::cout << a;
}