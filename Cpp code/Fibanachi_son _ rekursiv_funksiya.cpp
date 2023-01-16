#include <iostream>
using namespace std;

long double fib(double a)
{
	if(a == 1)
	return 1;
	else 
	return a* fib(a-1);
}

int main()
{
	double a;
	cout << " Son kiritng : " ; cin >> a;
	cout << fib(a);
return 0;
}
