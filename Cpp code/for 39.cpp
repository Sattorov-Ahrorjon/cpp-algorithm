#include <iostream>
using namespace std;
int main()
{
	int A, B, v;
	cout << " A < B " << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	v = B - A;
	for(int i=A; i<=B; i++)
	{
		cout << endl;
		for(int j=1; j<=i; j++)
		{
			cout << i << " ";
		}
	}
return 0;
}
