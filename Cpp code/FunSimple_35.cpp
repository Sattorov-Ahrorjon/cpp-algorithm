#include <iostream>
using namespace std;

double Fact2(double f)
{
	if(f>2)
	{
		return f*Fact2(f-2);
	}
}

int main()
{
	double n1, n2, n3;
	cout << " N1 = "; cin >> n1;
	cout << " N2 = "; cin >> n2;
	cout << " N3 = "; cin >> n3;
	cout << Fact2(n1) << endl;
	cout << Fact2(n2) << endl;
	cout << Fact2(n3) << endl;
return 0;
}
