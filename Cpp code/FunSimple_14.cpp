#include <iostream>
using namespace std;

void ShiftRight3(int *a, int *b, int *c)
{
	int v;
	v = *c;
	*c = *b;
	*b = *a;
	*a = v;
}
int main()
{
	int A, B, C;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "C = "; cin >> C;
	ShiftRight3(&A, &B, &C);
	cout << " A = " << A << " B = " << B << " C = " << C << endl;
return 0;
}
