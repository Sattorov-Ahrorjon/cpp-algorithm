#include <iostream>
using namespace std;
int main()
{
	float a, v=1, sum=0;
	cout << " a > 1 " << endl;
	cout << " a = "; cin >> a;
	while( sum <= a )
	{
		sum = sum + 1/v;
		v++;
	}
	cout << " k = " << v << endl;
	cout << " Yig'indi = " << sum;
return 0;
}
