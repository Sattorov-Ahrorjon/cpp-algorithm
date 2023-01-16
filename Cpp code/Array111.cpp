#include <iostream>
using namespace std;
int main()
{
	int n, v, con=0;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> arr[i];
		if(arr[i] % 2 == 1) con ++;
	}
	int arr2[n+con], j;
	j = n;
	
	for(int i=0; n>i; i++)
	{
		arr2[i] = arr[i];
		if(arr[i] % 2 == 1) arr2[j++] = arr[i];
		if(arr[i] % 2 == 1) arr2[j++] = arr[i];
	}
	
	for(int i=0; n+con*2 > i; i++)
	{
		cout << "\n arr[" << i << "] = " << arr2[i];
	}
return 0;
}
