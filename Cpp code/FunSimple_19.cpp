#include <iostream>
#include <cmath>
using namespace std;
float Pi=3.1415;

float RingS(int a, int b)
{
	return Pi*(a*a - b*b);
}

int main()
{
	int r1, r2;
	cout << " R1 = "; cin >> r1;
	cout << " R2 = "; cin >> r2;
	cout << abs(RingS(r1, r2));
return 0;
}
