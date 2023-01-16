#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, n, sum=0, con, v=1, fac;
	
	cout << " N >= 3* X " << endl;
	cout << " X = "; cin >> x;
	cout << " N = "; cin >> n;
	v=-1;
	
	for(int i=1; i<=n; i+=2)
	{
		v = v* -1;
		fac = 1;
		for(int j=1; j<=i; j++)
		{
			fac = fac* j;
		}
		con = v* pow(x, i) /fac;
		cout << con << "  ";
		sum = sum + con;
	}
	
	cout << "\n sum = " << sum;
	cout << "\n sin(x) = " << sin(x);

return 0;
}
