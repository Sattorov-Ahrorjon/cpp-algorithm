#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	float p=3.14;
	cout << "1-radius, 2-diametr, 3-uzunligi, 4-doiraning yuzi,\n";
	cout << "javob = "; cin >> a;
	switch(a)
	{
		case 1: cout << "Doira Radius = "; cin >> b; break;
		case 2: cout << "Doira Diametr = "; cin >> b; break;
		case 3: cout << "Doira uzunligi = "; cin >> b; break;
		case 4: cout << "Doira yuzi = "; cin >> b; break;		
	}
	switch(a)
	{
		case 1: cout << "Diametr = " << 2*b <<"\n";
		cout << "Doira uzunligi = " << 2*p*b << "\n";
		cout << "Doira yuzi = " << p*b*b ; break;
		
		case 2: cout << "Radius = " << b/2 << "\n";
		cout << "Doira uzunligi = " << b*p << "\n";
		cout << "Doira yuzi = " << (p*b*b)/4 ; break;
		
		case 3: cout << "Radius = " << b/(2*p) << "\n";
		cout << "Diametr = " << b/p << "\n";
		cout << "Doira yuzi = " << (b*b)/(4*p); break;
		
		case 4: cout << "Radius = " << sqrt(b/p) << "\n";
		cout << "Diametr = " << sqrt(b*4/p) << "\n";
		cout << "Doira uzunligi = " << sqrt(b*p*4); break;
	}
return 0;
}
