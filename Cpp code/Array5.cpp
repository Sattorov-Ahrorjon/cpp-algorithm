#include <iostream>
using namespace std;
int main()
{
	int arr[10], F=0, F1=0, F2=1, n;
	cout << " {10>=n} n - "; cin >> n;
	for(int i=0; n>i; i++)
	{
		arr[i] = F;
		F = F1 + F2;
		F2 = F1;
		F1 = F;
	}
	cout << endl;
	for(int j=0; n>j; j++)
	{
		cout << " " << arr[j];
	}
return 0;
}
