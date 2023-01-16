#include <iostream>
using namespace std;
int main()
{
	int n, a, j=0, v;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		if(arr[i+1] > arr[i])
		{
			arr[j] = arr[i+1];
			j++;
		}
	}
	for(int i=j-2; i>=0; i--)
	{
		cout << " " << arr[i];
	}
	cout << endl << j-1 << " taa";
return 0;
}
