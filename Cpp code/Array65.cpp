#include <iostream>
using namespace std;
int main()
{
	int n, k, v;
	cout << " n = "; cin >> n;
	cout << " [1< k < n]  k = "; cin >> k;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v + k;
	}
return 0;
}
