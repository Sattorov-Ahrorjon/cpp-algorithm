#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(arr[j-1] > arr[j])
			{
				arr[j] = arr[j] + arr[j-1];
				arr[j-1] = arr[j] - arr[j-1];
				arr[j] = arr[j] - arr[j-1];
			}
		}
	}
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
