#include <iostream>
#include <cmath>
using namespace std;

float TriangleP(int a, int b)
{
	int c = hypot(a, b);
	return a + b + c;
}

int main()
{
	int a, b;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " Perimetri = " << TriangleP(a, b);
return 0;
}
