#include <iostream>
using namespace std;
int main()
{
	int a, n, arr[10];
	cout << " {10>=n  and  n-juft} \n  n - "; cin >> n;
	cout << " Massivga element bering \n";
	for(int i=0; n>i; i++)
	{
		cout << "a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i+=2)
	{
		cout << " " << arr[i];
	}
return 0;
}
