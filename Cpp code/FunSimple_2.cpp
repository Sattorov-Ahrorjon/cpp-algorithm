#include <iostream>
using namespace std;

void PowerA234( int *Prt2 )
{
	int a = *Prt2;
	cout << a*a << endl;
	cout << a*a*a << endl;
	cout << a*a*a*a << endl << endl;
}
int main()
{
	int A=2, B=4, C=5;
	PowerA234( &A );
	PowerA234( &B );
	PowerA234( &C );
return 0;
}
