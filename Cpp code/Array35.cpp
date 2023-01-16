#include <iostream>
using namespace std;
int main()
{
	int a, n, v=0;
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
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
		{
			if(v == 0) v = arr[i];
			if(v > arr[i]) v = arr[i]; 
		}
	}
	cout << " Javob = " << v;
return 0;
}
