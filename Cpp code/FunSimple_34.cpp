#include <iostream>
using namespace std;

double Fact(double F)
{
	if(F>1)
	return F*Fact(F-1);
}

int main()
{
	double n1, n2, n3;
	cout << " N1 = "; cin >> n1;
	cout << " N2 = "; cin >> n2;
	cout << " N3 = "; cin >> n3;
	cout << Fact(n1) << endl;
	cout << Fact(n2) << endl;
	cout << Fact(n3) << endl;
return 0;
}
