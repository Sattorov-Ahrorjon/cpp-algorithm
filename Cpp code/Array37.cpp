#include <iostream>
using namespace std;
int main()
{
	int n, a, v=0;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n-1>i; i++)
	{
		if(arr[i+1] > arr[i]) v++;
	}
	cout << " Javob = " << v;
return 0;
}
