#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int v, n, j=0, m;
	cout << " n = "; cin >> n;
	m = n/2;
	if(n % 2 == 1) m = n/2 + 1;
	
	int arra[n+m],  arrb[m];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arra[i] = v;
	}
	
	for(int i=0; n>i; i+=2)
	{
		arrb[j] = arra[i];
		j++;
	}
	j=0;
	
	for(int i=n; (n+m)>i; i++)
	{
		arra[i] = arrb[j];
		j++;
	}
	
	for(int i=0; (n+m)>i; i++)
	{
		cout << " " << arra[i];
	}
return 0;
}
