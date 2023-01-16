#include <iostream>
using namespace std;
int main()
{
	int n, v, con=0;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
		if(0 > v) con ++;
	}
	int arr2[n+con];
	for(int i=0, j=0; n>i; i++, j++)
	{
		if(arr[i] > 0) arr2[j] = arr[i];
		else
		{
			arr2[j] = 0;
			arr2[j+1] = arr[i];
			j++;
		}
	}
	
	for(int i=0; n+con > i; i++)
	{
		cout << " | " << arr2[i];
	}
return 0;
}
