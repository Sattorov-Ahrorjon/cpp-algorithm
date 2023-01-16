#include <iostream>
using namespace std;
int main()
{
	int n, v;
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
		v=0;
		for(int j=0; i>=j; j++)
		{
			v = v + a[j];
		}
		b[i] = v;
		cout << " " << b[i];
	}
return 0;
}
