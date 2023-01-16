#include <iostream>
using namespace std;
int main()
{
	int son, b=0, on=10, b1=0, v=0, a=0;
	cout << " Son kiriting : "; cin >> son;
	while( son >= on )
	{
		on = on* 10;
		b++;
	}
	on = on/ 10;
	while( b >= b1 )
	{
		a = son/ on;
		son = son - a* on;
		on = on/ 10;
		if( a==2 )
		 v++;	
		b1++;	
	}
	cout << v << " ta 2 soni bor ";
return 0;
}
