#include <iostream>
#include <cmath>
using namespace std;

double Power2(double a, double x)
{
	return pow(a, x);
}

int main()
{
	double n, m, k, a;
	cout << " a = "; cin >> a;
	cout << " n = "; cin >> n;
	cout << " m = "; cin >> m;
	cout << " k = "; cin >> k;
	cout << " a^n = " << Power2(a, n) << endl;
	cout << " a^m = " << Power2(a, m) << endl;
	cout << " a^k = " << Power2(a, k) << endl;
return 0;
}
