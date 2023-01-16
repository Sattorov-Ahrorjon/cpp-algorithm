#include <iostream>
using namespace std;
int main()
{
	int son, on=10, v=1, sum=0, a;
	cout << " Son kiriting : "; cin >> son;
	while( son > on )
	{
		on = on* 10;
		v++;
	}
	cout << v << " honali son \n";
	on = on/ 10;
	while( true )
	{
		while( son > on )
		{
			a = son/ on;
			son = son - a*on;
		}
		sum = sum + a;
		a=0;
		on = on/ 10;
		if( son == 0 ) break;
	}
	cout << " Yig'indi : " << sum;
return 0;
}
