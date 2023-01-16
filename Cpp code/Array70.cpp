#include <iostream>
using namespace std;
int main()
{
	int n, v, j;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	j = n/2;
	for(int i=0; n/2 > i; i++)
	{
		v = a[i] + a[j];
		a[i] = v - a[i];
		a[j] = v - a[i]; j++;
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
return 0;
}
