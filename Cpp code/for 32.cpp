#include <iostream>
using namespace std;
int main()
{
	float n, A=1;
	cout << "n = "; cin >> n;
	for(int i=1; i<=n; i++)
	{
		A = (A + 1)/i;
		cout << A << "  ";
	}
return 0;
}
