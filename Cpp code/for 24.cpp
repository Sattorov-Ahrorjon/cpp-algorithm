#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, n, sum=0;
	double v=0, con=1, fac=1, c=-1;
	
	//  (n) ga 10 dan katta son kiritilsa aniqlik yuqori bo'ladi
	
	cout << " son kiriting : "; cin >> x;
	cout << " daraja son kiriting : "; cin >> n;
	
	for(int i=1; i<=2*n+2; i+=2)
	{
		// Faktorial hisoblash :
		fac = 1;
		
		for(int j=1; j<i; j++)
		{
			fac = fac* j;
		}
		

		
		if(v <= 2*n)
		{
			con = -c* pow(x, v)/fac;
			c = c* -1;
			v += 2;
		}
		
		sum = sum + con;
	}

	cout << "\n \a sum = " << sum;
	cout << "\n \a cos(x) = " << cos(x);
return 0;	
}
