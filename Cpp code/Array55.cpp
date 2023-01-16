#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " {15 > n} n = "; cin >> n;
	int a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	cout << endl; v=0;
	for(int i=1; n>i; i+=2)
	{
		b[i] = a[i];
		v++;
		cout << " " << b[i];
	}
	cout << endl << " " << v << " ta";
return 0;
}
