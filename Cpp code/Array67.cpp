#include <iostream>
using namespace std;
int main()
{
	int n, v, t;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
		if( v%2 == 1){
			t = v;
		}
	}
	for(int i=0; n>i; i++)
	{
		if(a[i]%2 == 1){
			a[i] = a[i] + t;
		}
	}
return 0;
}
