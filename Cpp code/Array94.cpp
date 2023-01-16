#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a, count=0;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	for(int i=1; n>i; i++)
	{
		for(int j=i; n>j; j++)
		{
			arr[j] = arr[j+1];
		}
	}
	float d = n;
	d = ceil(d/=2);
	
	for(int i=0; d>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
