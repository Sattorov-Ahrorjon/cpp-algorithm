#include <iostream>
using namespace std;
int main()
{
	float n, v=0;
	cout << "n = "; cin >> n;
	while( n>=2 )
	{
		n = n/2;
		v++;
	}
	if( n==1 ) cout << "2 ning " << v << " - darajasi";
	else cout << "2 ning dajasi emas";
return 0;
}
