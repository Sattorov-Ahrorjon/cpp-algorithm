#include <iostream>
using namespace std;
int main()
{
	int n, con=1, a;
	cout << " son kiriting : "; cin >> n;
	a = n;
	for(int i=1; i<=n; i++)
	{
		con = con * i;
	}
	cout << a << " faktorial  >> " << con << " - ga teng";
return 0;
}
