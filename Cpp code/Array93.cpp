#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	a = 0;
	
	for(int i=2; n>i; i++)
	{
		for(int j=i; n>j; j++)
		{
			arr[j] = arr[j+1];
		}
	}
	n /= 2;
	
	for(int i=0; n>=i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
