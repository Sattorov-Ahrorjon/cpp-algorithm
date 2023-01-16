#include <iostream>
using namespace std;
int main()
{
	int n, a;
	cout << " n = "; cin >> n;
	int arr[n], j=n-1;
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	for(int i=n-2; i>=0; i--)
	{
		if(arr[i] > arr[j])
		{
			arr[i] = arr[j] + arr[i];
			arr[j] = arr[i] - arr[j];
			arr[i] = arr[i] - arr[j];
			j--;
		}
	}
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
