#include <iostream>
using namespace std;

int fak(int a)
{
	if( a == 0)
	return 1;
	else 
	return a*fak(a-1);
}

int main()
{
	int x;
	cin >> x;
	cout << fak(x);
}
