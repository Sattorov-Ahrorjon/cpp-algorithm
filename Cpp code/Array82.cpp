#include <iostream>
using namespace std;
int main()
{
	int a, v, n, k;
	cout << " n = "; cin >> n;
	int arr[n];
	cout << " k = "; cin >> k;
	for(int i=0; n>i; i++)
	{
		cout << "a[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	
	for(int i=0; n-k>i; i++)
	{
		a = i + k;
		arr[i] = arr[a];
	}
	a = n-k;
	for(int i=a; n>i; i++)
	{
		arr[i] = 0;
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
