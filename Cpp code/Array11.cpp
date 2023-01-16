#include <iostream>
using namespace std;
int main()
{
	int n, k, v=1, a, arr[10];
	cout << " n - "; cin >> n;
	cout << " K - "; cin >> k;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i+1 << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=k; n>i; i*=v)
	{
		cout << " " << arr[i];
		v++;
	}
return 0;
}
