#include <iostream>
using namespace std;

int EKUK(int a, int b){
	int c=(a+b)/2, i=1, e;
	while(c!=i){
		if(a%i==0 and b%i==0){
			e=i; i++;
		}
		else  i++;
	}
	return a*b/e;
}

int main()
{
	int a, b, c, d;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	cout << "  EKUK(a, b) = " << EKUK(a, b);
	cout << "   EKUK(a, c) = " << EKUK(a, c);
	cout << "   EKUK(a, d) = " << EKUK(a, d);
return 0;
}
