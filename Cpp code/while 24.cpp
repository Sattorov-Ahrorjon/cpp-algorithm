#include <iostream>
using namespace std;
int main()
{
	int F=0, F1=0, F2=1, x, a = 10;
	cout << " Son kiriting : "; cin >> x;
	a = x;
	x = 0;
	while( a != x )
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
		x++;
		if( a == F ) 
		cout << " Bu son Fibanachi sonlar qatoriga kiradi !!! ";	
	}
return 0;
}
