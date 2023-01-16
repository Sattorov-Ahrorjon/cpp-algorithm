#include <iostream>
using namespace std;
int main()
{
	int n, k, h, v, j;
	cout << " n = "; cin >> n;
	int a[n], f = n;
	cout << " 1 < k < h < n\n";
	cout << " k = "; cin >> k;
	cout << " h = "; cin >> h;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	n = h - (h-k)/2; j=h-1;
	for(int i=k; n>i; i++)
	{
		v = a[i] + a[j];
		a[i] = v - a[i];
		a[j] = v - a[i]; j--;
	}
return 0;
}
