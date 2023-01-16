#include <iostream>
using namespace std;
int main()
{
	int a, n, k;
	
	cout << " n = "; cin >> n;
	int arr[n];
	cout << " {0 <= k < n} k = "; cin >> k;
	for(int i=0; n>i; i++)
	{
		cout << " a[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	for(int i=k; n>i; i++)
	{
		arr[i] = arr[i+1];
	}
	n-=1;
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
