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
	for(int j=0; n>j; j++)
	{
		if(arr[n-1] > arr[j]){
			cout << arr[j]; break;}
	}
return 0;
}
