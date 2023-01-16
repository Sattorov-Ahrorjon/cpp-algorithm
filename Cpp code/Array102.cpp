#include <iostream>
using namespace std;
int main()
{
	int n, v, k;
	cout << " n = "; cin >> n;
	cout << " [ 0 < k < n ] k = "; cin >> k;
	int arr[n+1];
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	for(int i=n+1; i>k; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[k+1] = 0;
	cout << endl;
	for(int i=0; n+1>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
