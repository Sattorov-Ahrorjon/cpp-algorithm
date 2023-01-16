#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " n = "; cin >> n;
	float x=0, v=0, h=1, a[n], b[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; n>i; i++)
	{
		v=0;
		for(int j=0; i>=j; j++)
		{
			v = v + a[j];
		}
		x = v / h++;
		b[i] = x;
		cout << " " << b[i];
	}
return 0;
}
