#include <iostream>
using namespace std;
int main()
{
	int n, a, j=0;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	for(int i=1; n>i; i++)
	{
		if(arr[j] > arr[i])
		{
			arr[j] = arr[j] + arr[i];
			arr[i] = arr[j] - arr[i];
			arr[j] = arr[j] - arr[i];
			j++;
		}
		else break;
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
