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
		sum = sum + a;
	}
	cout << endl; a = sum; sum = 0;
	for(int i=k; l>=i; i++)
	{
		sum = sum + arr[i];
	}
	cout << a - sum;
return 0;
}
