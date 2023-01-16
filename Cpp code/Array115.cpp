#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " n = "; cin >> n;
	int arr[n];
	int arr2[n];
	
	for(int i=0; n>i; i++)
	{
		arr2[i] = i;
		cout << " arr[" << i << "] = "; cin >> arr[i];
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] >= arr[j])
			{
				arr[j] = arr[j] + arr[i];
				arr[i] = arr[j] - arr[i];
				arr[j] = arr[j] - arr[i];
				
				arr2[j] = arr2[j] + arr2[i];
				arr2[i] = arr2[j] - arr2[i];
				arr2[j] = arr2[j] - arr2[i];
			}
		}
	}
	
	for(int i=0; n>i; i++)
	{
		cout << "\n   " << arr2[i];
	}
return 0;
}
