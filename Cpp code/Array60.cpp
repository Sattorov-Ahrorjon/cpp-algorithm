#include <iostream>
using namespace std;
int main()
{
	int v, n, sum=0;
	cout << " n = "; cin >> n;
	int a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		sum = 0;
		for(int j=i; n>j; j++)
		{
			sum = sum + a[j];
		}
		b[i] = sum;
		cout << " " << b[i];
	}
return 0;
}
