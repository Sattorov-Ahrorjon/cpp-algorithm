#include <iostream>
using namespace std;
int main()
{
	int n, v=0, con=1;
	cout << "n = "; cin >> n;
	while( n>0 )
	{
		con = con* ( n-v );
		v+=2;
		if( n-v <= 0 ) break;
	}
	cout << " n!! = " << con;
return 0;
}
