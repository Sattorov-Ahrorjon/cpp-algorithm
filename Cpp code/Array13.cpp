#include <iostream>
using namespace std;
int main()
{
	int n, a, arr[10];
	cout << "{ 10>=n and n-toq son } n - "; cin >> n;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = ";cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=n-2; i>0; i-=2)
	{
		cout << " " << arr[i];
	}
return 0;
}
