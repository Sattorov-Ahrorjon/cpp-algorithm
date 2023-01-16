#include <iostream>
using namespace std;
int main()
{
	int arr[10], j=2, n;
	cout << "{10>=n} n - "; cin >> n;
	for(int i=0; i<n; i++)
	{
		arr[i] = j;
		j*=2;
	}
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
