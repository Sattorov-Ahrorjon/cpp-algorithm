#include <iostream>
using namespace std;

void Swap(int *a, int *b);

int main()
{
	int A, B, C, D;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	cout << " D = "; cin >> D;
	Swap(&A, &B);
	Swap(&D, &C);
	cout << endl << " A = " << A << endl;
	cout << " B = " << B << endl;
	cout << " C = " << C << endl;
	cout << " D = " << D << endl;
return 0;
}

void Swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
