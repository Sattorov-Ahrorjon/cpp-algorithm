#include <iostream>
using namespace std;
int main()
{
	int n, v, b1=0, c1=0;
	cout << " n = "; cin >> n;
	int a[n], b[n], c[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		if(a[i] > 0){
			b[b1] = a[i];
			b1++;
		}
		else{
			c[c1] = a[i];
			c1++;
		}
	}
	cout << " b massiv elementlari : " << b1 << " ta \n";
	for(int i=0; b1>i; i++)
	{
		cout << " " << b[i];
	}
	cout << "\n c massiv elementlari : " << c1 << " ta \n";
	for(int i=0; c1>i; i++)
	{
		cout << " " << c[i];
	}
return 0;
}
