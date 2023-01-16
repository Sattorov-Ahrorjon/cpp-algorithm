#include <iostream>
using namespace std;
int main()
{
	int n, k=0, v=3;
	cout << " n > 1 " << endl;
	cout << " n = "; cin >> n;
	while( n>=v )
	{
		v = v* 3;
		k++;
	}
	cout << k;
return 0;
}
