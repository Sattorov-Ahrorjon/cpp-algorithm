#include <iostream>
using namespace std;
int main()
{
	int a, n, sum=1;
	cout << "  Son kiriting : "; cin >> a;
	cout << "  daraja son kiriting : "; cin >> n;
	for(int i=0; i<n; i++)
	{
		sum = sum *a;
	}
	cout << "\a  javob = " << sum;
return 0;
}
