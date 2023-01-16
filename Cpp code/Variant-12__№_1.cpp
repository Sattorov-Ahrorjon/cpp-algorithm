#include <iostream>
using namespace std;

double fib(double x);

int main()
{
	int n, f;
	cout << " n = "; cin >> n;
	f = fib(n);
	cout << " Natija = " << f;
return 0;
}

double fib(double x)
{
	int a=0, b=1, c;
	for(int i=0; i<x; i++)
	{
		c=a;
		a = a + b;
		b = c;
	}
	return c;
}
