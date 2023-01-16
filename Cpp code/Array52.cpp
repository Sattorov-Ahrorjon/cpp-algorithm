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
	cout << " b massiv \n";
	for(int i=0; n>i; i++)
	{
		if(a[i] > 4) b[i] = a[i] / 2;
		else b[i] = 2* a[i];
		cout << " " << b[i];
	}
return 0;
}
