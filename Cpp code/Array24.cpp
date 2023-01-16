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
	a = arr[1] - arr[0];
	n = arr[2] - arr[1];
	if(a == n) cout << a;
	else cout << 0;
return 0;
}
