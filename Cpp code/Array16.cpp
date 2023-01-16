#include <iostream>
using namespace std;
int main()
{
	int n, v, a, arr[10];
	cout << "{ 10>=n } n - "; cin >> n;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	v=n-1;
	for(int i=0; n/2>i; i++)
	{
		cout << " " << arr[i];
		cout << " " << arr[v];
		v--;
	}
	if(n % 2 == 1) cout << " " << arr[n/2];
return 0;
}
