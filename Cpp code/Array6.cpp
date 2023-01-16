#include <iostream>
using namespace std;
int main()
{
	int A, B, arr[10], n;
	cout << "{10>=n} {n>2}  n - "; cin >> n;
	cout << " A - "; cin >> A;
	cout << " B - "; cin >> B;
	arr[0] = A;
	arr[1] = B;
	A = A + B;
	for(int i=2; n>i; i++)
	{
		arr[i] = A;
		A = A*2; 
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
