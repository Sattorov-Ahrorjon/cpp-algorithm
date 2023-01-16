#include <iostream>
using namespace std;
int main()
{
	float A = 2, n;
	cout << "n = "; cin >> n;
	for(int i=1; i<n; i++)
	{
		A = 2 + 1/A;
		cout << A << " ";
	}
return 0;
}

