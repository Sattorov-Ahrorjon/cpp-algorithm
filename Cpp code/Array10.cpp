#include <iostream>
using namespace std;
int main()
{
	int a, n, v=0, arr[10];
	cout << " n - "; cin >> n;
	cout << " Massivga element bering\n";
	for(int i=0; n>i; i++)
	{
		cout << "a" << i+1 << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		if(arr[i] % 2 == 0)
		{
			cout << " " << arr[i];
			v++;
		}
	}
	cout << "   juft sonlar " << v << " ta\n";
	cout << endl; v=0;
	for(int i=n-1; i>=0; i--)
	{
		if(arr[i] % 2 == 1)
		{
			cout << " " << arr[i];
			v++;
		}
	}
	cout << "   toq sonlar " << v << " ta";
return 0;
}
