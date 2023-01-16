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
	a = arr[0];
	for(int i=0; n-1>i; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[n-1] = a;
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
