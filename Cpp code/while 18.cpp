#include <iostream>
using namespace std;
int main()
{
	int on=10, son, sum=0, v=1, a, b;
	cout << " Son kiriting : "; cin >> son;
	while( son > on )
	{
		on = on * 10;
	}
	on = on/ 10;
	b = on;
	while( true )
	{
		while( true )
		{
			a = son / on;
			son = son - a*on;
			break;
		}
		on = on/ 10;
		sum = sum + a*v;
		v = v*10;
		if( b < sum ) break;
	}
	cout << " Teskari = " << sum << endl;
return 0;	 
}
