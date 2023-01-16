#include <iostream>
using namespace std;
int main()
{
	int a, v, n;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	a = arr[n-1];
	
	for(int i=n-1; i>=0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = a;
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
