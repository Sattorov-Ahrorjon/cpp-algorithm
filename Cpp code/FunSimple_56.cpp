#include <iostream>
#include <cmath>
using namespace std;

float Leng( int x1, int y1, int x2, int y2 )
{
	return sqrt( pow( x2-x1, 2) + pow(y2-y1, 2) );
	
}

int main()
{
	int x1, x2, y1, y2, x, y, x3, y3;
	cout << " A {x:y} >> "; cin >> x >> y;
	cout << " B {x1:y1} >> "; cin >> x1 >> y1;
	cout << " C {x2:y2} >> "; cin >> x2 >> y2;
	cout << " D {x3:y3} >> "; cin >> x3 >> y3;
	
	cout << "  AB = " << Leng(x, y, x1, y1);
	cout << "  AC = " << Leng(x, y, x2, y2);
	cout << "  AD = " << Leng(x, y, x3, y3);
return 0;
}
