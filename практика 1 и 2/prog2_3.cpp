#include <iostream>
#include "header3.h"

using namespace std;

int main()
{
	figure A;
	figure B;
	figure C;

	float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

	cout << "enter coordinates of quadrilateral A ([x1, y1], [x2, y2], [x3, y3], [x4, y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	A.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "enter coordinates of quadrilateral B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "enter coordinates of quadrilateral C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
	C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

	cout << "perimeter A: "; A.show();
	cout << "perimeter B: "; B.show();
	cout << "perimeter C: "; C.show();

	cout << "\n";

	if (A.is_prug()) cout << "A is quadrilateral\n";
	if (B.is_prug()) cout << "B is quadrilateral\n";
	if (C.is_prug()) cout << "C is quadrilateral\n";

	cout << "\n";

	if (A.is_square()) cout << "A is square \n";
	if (B.is_square()) cout << "B is square \n";
	if (C.is_square()) cout << "C is square \n";

	cout << "\n";

	if (A.is_romb()) cout << "A is rhomb\n";
	if (B.is_romb()) cout << "B is rhomb\n";
	if (C.is_romb()) cout << "C is rhomb\n";

	cout << "\n";

	if (A.is_in_circle()) cout << "A in circle\n";
	if (B.is_in_circle()) cout << "B in circle\n";
	if (C.is_in_circle()) cout << "C in circle\n";

	cout << "\n";

	if (A.is_out_circle()) cout << "A out of circle\n";
	if (B.is_out_circle()) cout << "B out of circle\n";
	if (C.is_out_circle()) cout << "C out of circle\n";
}