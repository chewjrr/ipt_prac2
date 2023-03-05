#include "header3_1.h"
#include <iostream>
#include <cmath>

kvad_ur::kvad_ur(double a1, double b1, double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

void kvad_ur::set(double a1, double b1; double c1) {
	a = a1; b = b1; c = c1;
	D = b * b - 4 * a * c;
}

double kvad_ur::find_x() {
	if (D < 0) {
		std::cout << "no root!\n";
		return 0;
	}
	else if (D == 0) {
		std::cout << "one root!\n";
		std::cout << -1 * b / (2 * a) << endl;
	}
	else {
		std::cout << "two roots!\n";
		std::cout << "x1 = " << (-1 * b - sqrt(D)) / (2 * a)
			<< " " << "x2 = " << (-1 * b - sqrt(D)) / (2 * a) << endl;
	}
}

double kvad_ur::find_y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}
