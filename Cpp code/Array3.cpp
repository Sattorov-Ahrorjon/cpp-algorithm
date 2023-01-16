#include <iostream>
using namespace std;
int main()
{
	int A, D, n, arr[10];
	cout << "{10>=n} n - "; cin >> n;
	cout << "A - "; cin >> A;
	cout << "D - "; cin >> D;
	for(int i=0; n>i; i++)
	{
		arr[i] = A;
		A = A + D;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
