
//	CHEKLANGAN SONLAR UCHUN ANIQLIGI YUQORI ISHLAYDI

#include <iostream>
#include <cmath>
using namespace std;

double DigitN(double a, double n)
{
	int v=1, i=0, arr[30];
	while(v>0)
	{
		v = a-trunc(a/10)*10;
		arr[i] = v; 
		a = trunc(a/10);
		i++;
	}
	if( (i-1) >= n )
	{
		int j = i-(n+1);
		v = arr[j];
	}
	else
	{
		v = -1;
	}
	return v;
}

int main()
{
	double a, n;
	cout << " a = "; cin >> a;
	cout << " n = "; cin >> n;
	cout << DigitN(a, n);
return 0;	
}
