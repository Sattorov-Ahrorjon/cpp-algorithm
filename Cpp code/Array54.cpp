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
	cout << endl; v=0;
	cout << " b massiv \n";
	for(int i=0; n>i; i++)
	{
		if(a[i] % 2 == 0)
		{
			b[i] = a[i];
			cout << " " << b[i];
			v++;
		}
	}
	cout << endl << " " << v << " ta ";
return 0;
}
