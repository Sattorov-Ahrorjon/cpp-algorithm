#include <iostream>
using namespace std;
int main()
{
	int n, v, sum=0;
	cout << " n = "; cin >> n;
	int a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		v = 0;
		sum = 0;
		for(int j=i; n>j; j++)
		{
			sum = sum + a[j];
			v++;
		}
		sum = sum / v;
		b[i] = sum; cout << " " << b[i];
	}
return 0;
}
