#include <iostream>
using namespace std;
int main()
{
	int n, v=1, sum=0;
	cout << " n > 1 " << endl;
	cout << "n = "; cin >> n;
	do
	{
		sum = sum + v;
		v++;
	}
	while( ( sum+v ) <= n );
	cout << v << endl;
	cout <<"Yig'indi : " << sum;
return 0;
}
