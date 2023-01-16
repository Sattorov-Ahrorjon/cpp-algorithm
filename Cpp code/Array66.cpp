#include <iostream>
using namespace std;
int main()
{
	int n, v, j;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		if(a[i] % 2 == 0){
			j = a[i];
			break;
		}
	}
	for(int i=0; n>i; i++)
	{
		if( a[i]%2 == 0){
			a[i] = a[i] + j;
		}
	}
return 0;
}
