#include <iostream>
using namespace std;
int main()
{
	int n, k, v, j=0;
	cout << " n = "; cin >> n;
	int a[n];
	cout << " k = "; cin >> k;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=n-1; i>0; i--)
	{
		a[i] = a[i-k];
	}
	for(int i=0; n>i; i++)
	{
		if(k>i) a[i] = 0;
	}
	for(int i=0; n>i; i++)
	{
		cout << " | " << a[i];
	}
return 0;
}
