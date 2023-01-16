#include <iostream>
using namespace std;

int Ildizlar_soni(int a, int b, int c)
{
	int v;
	v = b*b - 4*a*c;
	if(v>0) v = 2;
	if(v==0) v = 1;
	if(0>v) v = 0;
	return v;
}

int main()
{
	int A, B, C;
	cout << " Ax^2 + Bx + C = 0 " << endl;
	cout << " (A>0)  A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	cout << " Ildizlar soni = " << Ildizlar_soni(A, B, C);
return 0;
}
