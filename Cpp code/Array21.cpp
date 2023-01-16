#include <iostream>
using namespace std;
int main()
{
	int n, a, k, l, sum=0;
	cout << " n = "; cin >> n;
	cout << " 0 < K < L < n\n";
	cout << " K = "; cin >> k;
	cout << " L = "; cin >> l;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	a = l - k + 1;
	for(int i=k; l>=i; i++)
	{
		sum = sum + arr[i];
	}
	cout << sum/a;
return 0;
}
