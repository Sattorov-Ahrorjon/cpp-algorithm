#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " n = "; cin >> n;
	int a[n], b[n], c[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		cout << " b" << i << " = "; cin >> v;
		b[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		c[i] = max(a[i], b[i]);
	}
	cout << endl << " c massiv \n";
	for(int i=0; n>i; i++)
	{
		cout << " " << c[i];
	}
}
