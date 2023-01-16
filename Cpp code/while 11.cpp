#include <iostream>
using namespace std;
int main()
{
	int n, k, v=0, sum=0;
	cout << " n > 1 " << endl;
	cout << " n = "; cin >> n;
	while( n >= sum )
	{
		v++;
		sum = sum + v;
	}
	cout << sum << endl;
	cout << v;
return 0;
}
