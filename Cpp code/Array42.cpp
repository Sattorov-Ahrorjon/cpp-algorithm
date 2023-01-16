#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a, r, u, v, d;
	cout << " n = "; cin >> n;
	int arr[n];
	cout << " R = "; cin >> r;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	d = arr[0] + arr[1];
	for(int i=0; n-1>i; i++)
	{
		a = arr[i] + arr[i+1];
		if(d > abs(a-r)){
			d = arr[i] + arr[i+1];
			u = i; v = i + 1;
		}
	}
	cout << " Javob = " << arr[u] << " va " << arr[v];
return 0;
}
