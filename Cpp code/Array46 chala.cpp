#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a, r;
	cout << " n = "; cin >> n;
	cout << " R = "; cin >> r;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	int sum=0;
	for(int i=0; n-1>i; i++)
	{
		a = arr[i] + arr[i+1];
		sum = sum + a;
		arr[i] = a;
	}
	sum = sum / n;
	sum = abs(sum - r);
	for(int i=0; n>i; i++)
	{
		a = 
		if(sum > abs(arr[i] - r))
		{
			sum = abs(arr[i] - r);
		}
		
	}
}
