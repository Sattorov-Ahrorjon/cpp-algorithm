#include <iostream>
using namespace std;
int main()
{
	int a, n, v;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] == arr[j]) arr[i] = 0;
		}
	}
	for(int i=0; n>i; i++)
	{
		if(arr[i] != 0)
		cout << " " << arr[i];
	}
return 0;
}
