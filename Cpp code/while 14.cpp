#include <iostream>
using namespace std;
int main()
{
	float a, k=1, sum=0;
	cout << " a > 1 " << endl;
	cout << " a = "; cin >> a;
	while( ( sum+1/k ) <= a )
	{
		sum = sum + 1/k;
		k++;
	}
	cout << " k = " << k << endl;
	cout << " Yig'indi = " << sum << endl;
return 0;
}
