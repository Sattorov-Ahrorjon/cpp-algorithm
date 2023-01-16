#include <iostream>
using namespace std;
int main()
{
	int F=0, F1=0, F2=1, x, n;
	cout << " ( n > 1 )  n = "; cin >> n;
	while( n > F )
	{
		F = F1 + F2;
		x = F - F1;
		F1 = F2;
		F2 = F;
	}
	cout << " " << x << " va " << F;
return 0;
}
