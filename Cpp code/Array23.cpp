#include <iostream>
using namespace std;
int main()
{
	int n, a, l, k, sum=0, v=0;
	cout << " n = "; cin >> n;
	int arr[n];
	cout << " 0 < K < L < n\n";
	cout << " K = "; cin >> k;
	cout << " L = "; cin >> l;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
		sum = sum + a;
	}
	cout << endl; a = sum; sum=0; 
	for(int i=k; l>=i; i++)
	{
		sum = sum + arr[i];
		v++;
	}
	cout << (a - sum)/(n-v);
return 0;
}
