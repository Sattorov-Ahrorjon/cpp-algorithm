#include <iostream>
using namespace std;
int main()
{
	int a, n, k, j=0;
	cout << " { 1 < k < 4 } and k < n \n";
	cout << " n = "; cin >> n;
	cout << " k = "; cin >> k;
	int arr[n], brr[k];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
		if(k > i){ brr[i] = a; }
	}
	
	for(int i=0; n>i; i++)
	{
		a = i + k;
		arr[i] = arr[a];
	}
	
	for(int i=n-k; n>i; i++)
	{
		arr[i] = brr[j]; j++;
	}
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
