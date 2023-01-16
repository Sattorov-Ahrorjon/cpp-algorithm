#include <iostream>
using namespace std;
int main()
{
	int n, v, katt = 0, kich;
	cout << " n = "; cin >> n;
	int a[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
		if(a[i] > katt){
			katt = a[i];
		}
	}
	kich = katt;
	for(int i=0; n>i; i++)
	{
		if(kich > a[i]){
			kich = a[i];
		}
	}
	for(int i=0; n>i; i++)
	{
		cout << " " << a[i];
	}
return 0;
}
