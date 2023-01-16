#include <iostream>
using namespace std;
int main()
{
	int n, a;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=n-2; i>=1; i--)
	{
		if(arr[i] > arr[0] && arr[n-1] > arr[i])
		{
			cout << i ;
			break;
		}
		else cout << 0;
	}
return 0;
}
