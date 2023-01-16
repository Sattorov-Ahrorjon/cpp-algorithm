#include <iostream>
#include <cmath>
using namespace std;

float Dist(int x, int y, int x1, int y1, int x2, int y2)
{
	float a, b, c, d, p, S;
	a = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2));
	b = sqrt( pow(x-x1, 2) + pow(y-y1, 2));
	c = sqrt( pow(x-x2, 2) + pow(y-y2, 2));
	p = (a + b + c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	return 2*S/a;	
}

int main()
{
	int x, y, x1, y1, x2, y2, x3, y3;
	cout << " P {x:y} \n"; cin >> x >> y;
	cout << " A {x1:y1} \n"; cin >> x1 >> y1;
	cout << " B {x2:y2} \n"; cin >> x2 >> y2;
	cout << " C {x3:y3} \n"; cin >> x3 >> y3;
	cout << " \n P nuqtadan AB tomongacha = ";
	cout << Dist(x, y, x1, y1, x2, y2);
	cout << " \n P nuqtadan BC tomongacha = ";
	cout << Dist(x, y, x2, y2, x3, y3);
	cout << " \n P nuqtadan AC tomongacha = ";
	cout << Dist(x, y, x1, y1, x3, y3);
return 0;	
}
