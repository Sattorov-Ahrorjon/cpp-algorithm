#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " [n - juft son ] n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i+=2)
	{
		v = a[i] + a[i+1];
		a[i] = v - a[i];
		a[i+1] = v - a[i];
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
return 0;
}
