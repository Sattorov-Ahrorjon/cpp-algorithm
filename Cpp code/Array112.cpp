#include <iostream>
using namespace std;
int main()
{
	int n, con=0;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> arr[i];
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] >= arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	
	for(int i=0; n>i; i++)
	{
		cout << "\n arr[" << i << "] = " << arr[i];
	}
return 0;
}
