#include <iostream>
#include <cmath>
using namespace std;

void RectPS(int x, int y, int *s);

int main()
{
	int x1, y1, x2, y2;
	int s1;
	cout << "	1 - to'rtburchak " << endl;
	cout << " x1 va y1 kiriting = "; cin >> x1 >> y1;
	cout << " x2 va y2 kiriting = "; cin >> x2 >> y2;
	x1 = abs(x2 - x1);
	y1 = abs(y2 - y1);
	RectPS(x1, y1, &s1);
	
	int s2;
	cout << "	2 - to'rtburchak " << endl;
	cout << " x1 va y1 kiriting = "; cin >> x1 >> y1;
	cout << " x2 va y2 kiriting = "; cin >> x2 >> y2;
	x2 = abs(x2 - x1);
	y2 = abs(y2 - y1);
	RectPS(x2, y2, &s2);
	cout << " 1 - Yuzasi = " << s1 << endl;
	cout << " 2 - Yuzasi = " << s2;
return 0;
}

void RectPS(int x, int y, int *s)
{
	*s = x * y;
}
