#include <iostream>
#include <cmath>
using namespace std;

double Power1(double a, double b)
{
	return pow(a, b);
}

int main()
{
	double a1, a2, a3, b;
	cout << " a1 = "; cin >> a1;
	cout << " a2 = "; cin >> a2;
	cout << " a3 = "; cin >> a3;
	cout << " b = "; cin >> b;
	cout << "\n a1^b = " << Power1(a1, b);
	cout << "\n a2^b = " << Power1(a2, b);
	cout << "\n a3^b = " << Power1(a3, b);
return 0;
}
