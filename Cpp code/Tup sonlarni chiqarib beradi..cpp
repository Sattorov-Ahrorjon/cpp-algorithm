#include <iostream>
using namespace std;

int func(int a)
{
	int b, b1=0;
	for(int i=1;  i<a; i++)
	{
		b = a% i;
		if(b == 0)
			b1++ ;
	}
cout << b1 << endl;
return b1 ;
}

int main()
{
	int a ;
	cout << "Son kiriting >> "; cin >> a;
	int x[a] = {}, y[a] = {}, z[a] = {};
	
	// Funksiyaga qiymat uzatish :
	for(int i=2; i<=a; i++)
	{
		z[i-2] = func(i) ;
	}
	
	// Massivlarga qiymat joylash :
	for(int i=0; i<a; i++)
	{
		if(z[i] == 1)
			x[i] = i+2;
		else
		{
			y[i] = i+2;
		}
	}
	
	// 	Tub sonlarni chiqarish :
	cout << " >> Tub sonlar << " << endl;
	for(int i=0; i<a; i++)
	{
		if(x[i] > 0)
			cout << x[i] << endl;
	}
	
	//	Murakkab sonlarni chiqarish :
	cout << " >> Murakkab sonlar << " << endl;
	for(int i=0; i<a; i++)
	{
		if(y[i] > 0 && y[i] <= a)
			cout << y[i] << endl;
	}
}
