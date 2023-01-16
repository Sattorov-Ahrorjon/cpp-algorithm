#include <iostream>
using namespace std;
int main()
{
	int a, n, v=0, j=0;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=1; n-1>i; i++)
	{
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) v = 0;
		else if(arr[i-1] > arr[i] && arr[i+1] > arr[i]) v = 0;
		else {
			arr[j] = arr[i];
			j++;
		}
	}
	for(int i=0; j>i; i++)
	{
		if(arr[i] > v) v = arr[i];
	}
	cout << v;
return 0;
}
