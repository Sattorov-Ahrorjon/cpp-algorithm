#include <iostream>
using namespace std;
int main()
{
	int n, m, v=0;
	cout << " n > m " << endl;
	cout << " n = "; cin >> n;
	cout << " m = "; cin >> m;
	while( n >= m )
	{
		n = n - m;
		v++;
	}
	cout << " Butun = " << v << endl;
	cout << " Qoldiq = " << n;
return 0;
}
