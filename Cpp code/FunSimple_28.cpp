#include <iostream>
using namespace std;

void IsPrime(int a, int *x)
{
	static int count; 
	int d=0, v;
	for(int i=1; i<a; i++)
	{
		v = a%i;
		if(v == 0) d++;
	}
	if(d == 1) count++;
	*x = count;
}

int main()
{
	int a, x, k;
	cout << " Nechta son kiritmoqchisiz k = "; cin >> k;
	int arr[k];
	for(int i=0; i<k; i++)
	{
		cout << i+1 << " - elementni kiriting : ";
		cin >> a;
		arr[i]=a;
	}
	for(int j=0; j<k; j++)
	{
		IsPrime(arr[j], &x);
	}
	cout << "  " << x << " tasi tup";
return 0;
}
