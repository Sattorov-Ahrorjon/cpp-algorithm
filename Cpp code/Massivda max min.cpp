#include <iostream>
using namespace std;
int main()
{
	short int a, n, n1, m1;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i+1 << "] = "; cin >> a;
		arr[i] = a;
	}
	int max = arr[0], min = arr[0];
	for(int i=0; n>i; i++)
	{
		if(arr[i] > max){ max = arr[i]; n1 = i;}
		if(min > arr[i]){ min = arr[i]; m1 = i;}
	}
	cout << " Max_o'rni = " << n1+1 << endl;
	cout << " Min_o'rni = " << m1+1 << endl;
	cout << " Max = " << max << endl;
	cout << " Min = " << min << endl;
}
