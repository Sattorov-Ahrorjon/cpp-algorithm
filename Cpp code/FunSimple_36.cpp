#include <iostream>
using namespace std;

double Fib(double N)
{
	int f1=0, n=0, a, f=0, f2=1;
	while(N!=n)
	{
		a = f;
		f = f1 + f2;
		f2 = f1;
		f1 = f;
		n++;
	}
	return a;
}

int main()
{
	double n;
	cout << " N = "; cin >> n;
	cout << " Natija = " << Fib(n);
return 0;
}
