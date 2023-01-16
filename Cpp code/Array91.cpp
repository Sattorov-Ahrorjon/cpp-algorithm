#include <iostream>
using namespace std;
int main()
{
	int a, n, k, m;
	cout << " n = "; cin >> n;
	int arr[n];
	
	cout << "\n   {0 < k < m < n} \n";
	cout << " k = "; cin >> k;
	cout << " m = "; cin >> m;
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> a;
		arr[i] = a;
	}
	
	m = m-k;
	for(int i=k; n>i; i++)
	{
		arr[i] = arr[i+m];
	}
	n-=m;
	cout << "\n Elementlar soni : " << n << endl; 
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
