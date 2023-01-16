#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << " son kiriting : "; cin >> a;
	cout << " daraja son kiriting : "; cin >> n;
	int consta = a;
	for(int i=1; i<=n; i++)
	{
		cout << consta << " - ning  " << i;
		cout << " - darajasi " << a << endl;
		a *= consta;
	}
return 0;
}
