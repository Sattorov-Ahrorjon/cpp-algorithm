#include <iostream>
using namespace std;
int main()
{
	int n, a, v=0;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=1; n>i; i+=2)
	{
		if(arr[i] > v) v = arr[i];
	}
	cout << " Max = " << v;
return 0;
}
