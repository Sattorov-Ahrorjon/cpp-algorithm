#include <iostream>
using namespace std;
int main()
{
	int i=0, max=0;
	int n, a, b;
	cout << " N = "; cin >> n;
	int arr[n];
	while(i != n)
	{
		cout << i+1 << "-element = "; cin >> arr[i];
		i++;
	}
	
	for(i=0; i<n-1; i++)
	{
		if ( (arr[i] + arr[i+1]) >= max)
		{
			max = arr[i] + arr[i+1];
			a = arr[i];
			b = arr[i+1];
		}
	}
	cout << "Max elementlar = " << a << " va " << b;
}
