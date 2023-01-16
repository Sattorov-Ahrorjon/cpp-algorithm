#include <iostream>
using namespace std;
int main()
{
	int a, b=1;
	cout << "Son kiriting : ";
	cin >> a;

	while ( a/10 >= 1 )
	{
		a=a/10;
		b++;
	}
	cout << b;
}
