#include <iostream>
using namespace std;
int main()
{
	int a, n, v=0;
	cout << " n = "; cin >> n;
	int arr[n], arr2[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n-1>i; i++)
	{
		a = 1;
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] == arr[j])
			{
				a++;
				arr2[i] = a;
			}
			else{
				arr2[i] = a;
			}
		}
	}
	a = 0;
	for(int i=0; n>i; i++)
	{
		if(arr2[i] > a){
			a = arr2[i];
			v = i;
		}
	}
	cout << " " << arr[v];
return 0;
}
