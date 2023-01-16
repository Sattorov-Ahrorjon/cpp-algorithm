#include <iostream>
using namespace std;
int main()
{
	float p, sum=10, v=1;
	cout << " ( 0 < p < 50 ) p = "; cin >> p;
	while( ( sum+sum*p/100 ) <= 200 )
	{
		sum = sum + sum*p/100;
		v++;
	}
	cout << " Kun = " << v << endl;
	cout << " Umumiy = " << sum;
return 0;
}
