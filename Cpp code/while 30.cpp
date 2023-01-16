#include <iostream>
using namespace std;
int main()
{
	int A, B, C, a=1, b=0, x=0;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	a = A* B;
	while ( a > b )
	{
		b = C* C;
		a = a - b;
		if( a > 0 )
		x++;
	}
	cout << "  " << x << " - ta ";
return 0;
}
