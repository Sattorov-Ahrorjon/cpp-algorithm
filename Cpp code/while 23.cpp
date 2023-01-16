#include <iostream>
using namespace std;
int main()
{
	int son1, son2, x, y, a, b=1, d=0, f=0;
	cout << " 1 - Son kiriting : "; cin >> son1;
	cout << " 2 - Son kiriting : "; cin >> son2;
	
	if( son1 >= son2 ) a = son2;
	else a = son1;
	
	while( a >= b )
	{
		x = son1 % b;
		y = son2 % b;
		if( x==0 && y==0 )
		{
			cout << b << "  ";
			if( d > b ) f = d;
			else f = b;
		}
		b++;
	}
	cout << endl << f;
return 0;
}
