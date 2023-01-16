#include <iostream>
using namespace std;
int main()
{
	int n, arr[10], a;
	cout << " n - "; cin >> n;
	cout << " Massivga elment bering" << endl;
	for(int i=0; n>i; i++)
	{
		cout << "a" << i+1 << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=n-1; i>=0; i--)
	{
		cout << " " << arr[i];
	}
return 0;
}
