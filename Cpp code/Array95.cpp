#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	v = 0;
	
	for(int i=0; n>i; i++)
	{
		if(arr[i] == arr[i+1])
		{
			for(int j=i+1; n>j; j++)
			{
				arr[j] = arr[j+1];
			}
			v++;
		}
	}
	v/=2;
	n-=v;
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
