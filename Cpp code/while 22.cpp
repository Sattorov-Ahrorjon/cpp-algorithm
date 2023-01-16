#include <iostream>
using namespace std;
int main()
{
	int son, b=0, c=0, v=2;
	cout << " Son kiriting : "; cin >> son;
	while( son > v )
	{
		b = son % v;
		v++;
		if( b==0 )
		c++;
	}
	if( c==0 ) cout << " Tup son \n";
	else cout << " Tup son emas \n";
return 0;
}
