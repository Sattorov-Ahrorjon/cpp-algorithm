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
	a = arr[1]/arr[0];
	for(int i=0; n>i; i++)
	{
		if(arr[i+1]/ arr[i] == a) v++;
	}
	if(n-1 == v) cout << a;
	else cout << 0;
return 0;
}
