#include <iostream>
using namespace std;
int main()
{
	int n, k, v=1;
	cout << " n > 1 " << endl;
	cout << "n = "; cin >> n;
	while( v<n )
	{
		v = v* 3;
		k++;
	}
	cout << k;
return 0;
}
