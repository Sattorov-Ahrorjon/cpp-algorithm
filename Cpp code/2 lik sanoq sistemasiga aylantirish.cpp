#include <iostream>
using namespace std;

void func(int n)
{
	int k;
	k=128;
	while ( k>0 )
	{
		cout << n/k;
		n=n%k;
		k=k/2;
	}
}

int main()
{
	func(178);
}
