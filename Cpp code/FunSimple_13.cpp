#include <iostream>
using namespace std;

void SortDec3(int a, int b, int c, int *katta, int *kichik, int *teng);

int main()
{
	int A, B, C;
	int katta, kichik, teng;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	SortDec3(A, B, C, &katta, &kichik, &teng);
	cout << " " << katta << " " << teng << " " << kichik << endl;
return 0;
}

void SortDec3(int a, int b, int c, int *katta, int *kichik, int *teng)
{
	*katta = max(max(a,b),c);
	*kichik = min(min(a,b),c);
	*teng = (a+b+c) - (*katta + *kichik);
}
