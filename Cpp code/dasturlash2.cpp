#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    double a=1, s=1;
    for ( int i=-4; i<0; i++ )
    {
        s *= a;
        for ( int m=2; m<=19; m++ )
        {
        	if (m+i!=0)
            		a *= ( pow ( i, 1/i) + m ) / ( i + m );
            	else 
            		continue;
        }
    }
    cout << "Natija: " << s;
    
    return 0;
}
