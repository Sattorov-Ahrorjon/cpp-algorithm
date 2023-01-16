#include <iostream>
using namespace std;
int main()
{
	int n, min=0;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> arr[i];
	}
	min = arr[0];
	
	for(int i=0, k; n>i; i++)
	{
		min = arr[i];
		for(int j=i; n>j; j++)
		{
			if(arr[j] <= min) { min = arr[j]; k=j;
			}
		}
		min = arr[i] + min;
		arr[i] = min - arr[i];
		min = min - arr[i];
		arr[k] = min;
	}
	
	for(int i=0; n>i; i++)
	{
		cout << "\n arr[" << i << "] = " << arr[i];
	}
return 0;
}
