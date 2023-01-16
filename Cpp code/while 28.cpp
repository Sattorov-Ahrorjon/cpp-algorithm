#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// MASALADA XATOLIK BOR 
	float a1=2, a=0, n=0;
	float e = exp(1);
	while ( e > n )
	{
		a = 2 + 1/ a1;
		n = abs( a - a1 );
		a1 = a;
		cout << n << " ";
		a = 0;
		
	}
return 0;
}
