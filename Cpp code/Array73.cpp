#include <iostream>
using namespace std;
int main()
{
	int n, v, k, h, son, j;
	cout << " n = "; cin >> n;
	int a[n];
	cout << "\n 1 < k < h < n \n";
	cout << " k = "; cin >> k;
	cout << " h = "; cin >> h;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	son = (h-k)/2; j = h-1;
	h = h - son;
	for(int i=k; h>i; i++)
	{
		v = a[i] + a[j];
		a[i] = v - a[i];
		a[j] = v - a[i];
		j--;
	}
return 0;
}
