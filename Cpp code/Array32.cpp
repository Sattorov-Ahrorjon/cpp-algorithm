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
	cout << endl;
	for(int i=1; n>i; i++)
	{
		if(arr[i-1] > arr[i] && arr[i+1] > arr[i]){
			cout << arr[i];
			break;
		}
	}
break;
}
