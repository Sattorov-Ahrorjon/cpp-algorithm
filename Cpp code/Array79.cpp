#include <iostream>
using namespace std;
int main()
{
	int n, maxa=0, mina, maxi, mini, v, j;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=n-1; i>=0; i--)
	{
		a[i] = a[i-1];
	}
	for(int i=0; n>i; i++)
	{
		cout << " | " << a[i];
	}
return 0;
}
