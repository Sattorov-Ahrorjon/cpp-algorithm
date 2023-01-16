#include <iostream>
using namespace std;
int main()
{
	int n, a;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl; a = 0;
	for(int i=0; n>i; i++)
	{
		if(arr[i] > arr[i+1]) a++;
	}
	cout << " " << a;
return 0;
}
