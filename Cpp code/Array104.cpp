#include <iostream>
using namespace std;
int main()
{
	int n, v, k, m, count=0;
	cout << " n = "; cin >> n;
	cout << " [0<k<n and 1<m<10] " << endl;
	cout << " k = "; cin >> k;
	cout << " m = "; cin >> m;
	int arr[n+m];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	
	for(int i=0; m>i; i++)
	{
		for(int j=n+m-1; j>=k; j--)
		{
			arr[j] = arr[j-1];
		}
	}
		
	for(int i=0; n+m>i; i++)
	{
		cout << " " << arr[i];
	}
	
	for(int i=k; k+m>i; i++)
	{
		arr[i] = 0;
	}
	
	for(int i=0; n+m>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
