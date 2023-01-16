#include <iostream>
using namespace std;
int main()
{
	int n, v, con=0;
	cout <<  " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> arr[i];
		if(arr[i] % 2 == 0) con ++;
	}
	int arr2[n+con];
	v = n;
	
	for(int i=0, j=0; n>i; i++)
	{
		arr2[i] = arr[i];
		if(arr[i] % 2 == 0)
		{
			arr2[v++] = arr[i];
		}
	}
	
	for(int i=0; n+con > i; i++)
	{
		cout << "\n arr[" << i << "] = " << arr2[i];
	}
return 0;
}
