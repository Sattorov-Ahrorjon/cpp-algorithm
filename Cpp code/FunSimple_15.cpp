#include <iostream>
using namespace std;

void ShiftLeft3(int *a, int *b, int *c)
{
	int v;
	v = *a;
	*a = *b;
	*b = *c;
	*c = v;
}

int main()
{
	int A, B, C;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	ShiftLeft3(&A, &B, &C);
	cout << " A = " << A << " B = " << B << " C = " << C;
return 0;
}
