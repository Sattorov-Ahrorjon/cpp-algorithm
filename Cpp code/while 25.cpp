#include <iostream>
using namespace std;
int main()
{
	int F=0, F1=0, F2=1, x, n;
	cout << " ( n > 1 )  n = "; cin >> n;
	while( n >= F )
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
	}
	cout << " So'ralgan Fibanachi son " << F;
return 0;
}
