#include <iostream>
using namespace std;
int main()
{
	int v, a[5], b[5], c[10];
	for(int i=0; 5>i; i++)
	{
		cout << " v" << i << " = "; cin >> v;
		a[i] = v;
	}
	for(int i=0; 5>i; i++)
	{
		cout << " v" << i << " = "; cin >> v;
		b[i] = v;
	}
	v = 5;
	if(a[0] > b[0])
	{
		for(int i=0; 5>i; i++)
		{
			c[i] = b[i];
			c[v] = a[i]; v++;
		}
	}
	else{
		for(int i=0; 5>i; i++)
		{
			c[i] = a[i];
			c[v] = b[i]; v++;
		}
	}
	v = 0;
	while(10 > v)
	{
		cout << " " << c[v]; v++;
	}
return 0;
}
