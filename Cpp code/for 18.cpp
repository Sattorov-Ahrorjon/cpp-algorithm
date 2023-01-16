#include <iostream>
using namespace std;
int main()
{
	int a, n, x=-1;
	int consta, sum=0;
	cout << " son kiriting : "; cin >> a;
	cout << " daraja son kiriting : "; cin >> n;
	consta = -1;
	for(int i=0; i<=n; i++)
	{
		x = x* consta;
		cout << a << " - ning " << i << " - darajasi " << x << endl;
		consta = -a;
		sum = sum + x;
	}
	cout << " sum = " << sum << endl;
return 0;
}
