#include <iostream>
using namespace std;
int main()
{
	int n, k, a, j;
	cout << " {1 < k < 4} and k < n \n";
	cout << " n = "; cin >> n;
	cout << " k = "; cin >> k;
	int arr[n], brr[k];
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
		
		if(i >= n-k)
		{
			brr[j] = a; j++;
		}
	}
	
	for(int i=n-1; i>=k; i--)
	{
		a = i-k;
		arr[i] = arr[a];
	}
	
	for(int i=0; k>i; i++)
	{
		arr[i] = brr[i];
	}
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
