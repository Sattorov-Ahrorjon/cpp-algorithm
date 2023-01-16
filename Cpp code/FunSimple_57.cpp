#include <iostream>
#include <cmath>
using namespace std;

float Perim(int x, int y, int x1, int y1, int x2, int y2)
{
	float a, b, c;
	a = sqrt( pow(x-x1, 2) + pow(y-y1, 2));
	b = sqrt( pow(x-x2, 2) + pow(y-y2, 2));
	c = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
	return a + b + c;
}

int main()
{
	int x, y, x1, y1, x2, y2, x3, y3;
	cout << " A {x:y} \n"; cin >> x >> y;
	cout << " B {x1:y1} \n"; cin >> x1 >> y1;
	cout << " C {x2:y2} \n"; cin >> x2 >> y2;
	cout << " D {x3:y3} \n"; cin >> x3 >> y3;
	cout << " ABC  P = " << Perim(x, y, x1, y1, x2, y2);
	cout << " ABD  P = " << Perim(x, y, x1, y1, x3, y3);
	cout << " ACD  P = " << Perim(x, y, x2, y2, x3, y3);
return 0;
}
