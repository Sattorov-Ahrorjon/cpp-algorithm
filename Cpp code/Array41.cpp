#include <iostream>
using namespace std;
int main()
{
	int n, a, u, v;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl; a=0;
	for(int i=0; n-1>i; i++)
	{
		if(arr[i] + arr[i+1] > a){
			a = arr[i] + arr[i+1];
			u = i; v = i+1;
		}
	}
	cout << " Javob = " << arr[u] << " va " << arr[v];
return 0;
}
