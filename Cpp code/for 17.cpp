#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, n, sum=0, c;
	cout << " son kiriting : "; cin >> a;
	cout << " daraja son kiriting : "; cin >> n;
	for(int i=0; i<=n; i++)
	{
		c = pow(a, i);
		cout << a << " - ning " << i << " - darajasi " << c << endl;
		sum = sum +c;
	}
	cout << " sum = " << sum << endl;
}
