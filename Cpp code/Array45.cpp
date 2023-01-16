#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a, u, v;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	a = abs(arr[0] - arr[1]);
	for(int i=1; n-1>i; i++)
	{
		if( a > abs(arr[i] - arr[i+1]))
		{
			a = abs(arr[i] - arr[i+1]);
			u = i;  v = i+1;
		}
	}
	cout << " Javob = " << u << " va " << v;
return 0;
}
