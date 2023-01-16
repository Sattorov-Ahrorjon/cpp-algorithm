#include <iostream>
using namespace std;
int main()
{
	int son, b=0, b1=0, v=0, on=10, a;
	cout << " Son kiriting : "; cin >> son;
	while( son > on )
	{
		on =on* 10;
		b++;
	}
	on = on/ 10;
	while( b >= b1 )
	{
		a = son/ on;
		son = son - a* on;
		on = on/ 10;
		if( a% 2 == 1 )
		{
			v++;
			cout << a << "  ";
		}
		
		b1++;
	}
	cout << endl << v << " ta toq son bor ";
return 0;
}
