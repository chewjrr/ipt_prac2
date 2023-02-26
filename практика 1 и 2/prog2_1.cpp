#include <iosrteam>
#include "header1.h"

int main() {
	tringle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "enter sides of triangle" << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst())) {
			mas[i].show();
			cout << "the triangle does not exist" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "perimeter: " << mas[i].perimeter() << endl;
		cout << "square: " << mas[i]d.square() << endl;
	}
	return 0;
}