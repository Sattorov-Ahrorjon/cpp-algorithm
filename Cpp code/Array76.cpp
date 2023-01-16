#include <iostream>
using namespace std;
int main()
{
	int n, maxa=0, mina, maxi, mini, v, j;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=1; n-1>i; i++)
	{
		if(a[i] > a[i-1] && a[i] > a[i+1]){
			a[i] = 0;
		}
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
	
return 0;
}
