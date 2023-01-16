#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " {15 > n} n = "; cin >> n;
	int a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	cout << endl << " Juft index \n";
	for(int i=0; n>i; i+=2)
	{
		b[i] = a[i];
		cout << " " << b[i];
	}
	cout << endl << " Toq index \n";
	for(int i=1; n>i; i+=2)
	{
		b[i] = a[i];
		cout << " " << b[i];
	}
return 0;
}
