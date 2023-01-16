#include <iostream>
using namespace std;
int main()
{
	int n, v, j=0, m;
	cout << " n = "; cin >> n;
	
	m = n/2;
	int arra[n*2],  arrb[m];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arra[i] = v;
	}
	
	for(int i=1; n>=i; i+=2)
	{
		arrb[j] = arra[i];
		j++;
	}
	j=0;
	
	for(int i=n; n+m>i; i++)
	{
		arra[i] = arrb[j];
		j++;
	}
	j=0;
	
	for(int i=n+m; n*2>i; i++)
	{
		arra[i] = arrb[j];
		j++;
	}
	
	for(int i=0; n*2>i; i++)
	{
		if(arra[i] != 0)
		cout << " " << arra[i];
	}
}
