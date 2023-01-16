#include <iostream>
using namespace std;
int main()
{
	int n, v, al;
	cout << " n = "; cin >> n;
	int a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		cout << " b" << i << " = "; cin >> v;
		b[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		al = a[i] + b[i];
		a[i] = al - a[i];
		b[i] = al - a[i];
	}
	cout << endl << " a massiv : ";
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
	cout << endl << " b massiv : ";
	for(int i=0; n>i; i++)
	{
		cout << " " << b[i];
	}
return 0;
}
