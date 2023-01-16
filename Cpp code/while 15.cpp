#include <iostream>
using namespace std;
int main()
{
	float S, v=0, sum=0, p;
	cout << " Boshlang'ich summa : "; cin >> S;
	cout << " Bank foiz miqdori ( 1 < p < 25 ) p = "; cin >> p;
	sum = S;
	while( 2*sum >= ( S + S*p/100 ) )
	{
		S = S + S*p/100;
		v++;
	}
	cout << " Oy = " << v << endl;
	cout << " Summa = " << S;
return 0;
}
