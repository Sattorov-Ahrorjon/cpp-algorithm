#include <iostream>
using namespace std;

void Sortlnc3(int *a, int *b, int *c, int *katta, int *kichik);

int main()
{
	int A, B, C, katta, kichik;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	Sortlnc3(&A, &B, &C, &katta, &kichik);
	cout << " Kattasi " << katta << endl;
	cout << " Kichigi " << kichik << endl;
return 0;
}

void Sortlnc3(int *a, int *b, int *c, int *katta, int *kichik)
{
	if(*a > *b) if(*a > *c) *katta = *a;
	if(*b > *a) if(*b > *c) *katta = *b;
	if(*c > *a) if(*c > *b) *katta = *c;
	if(*b > *a) if(*c > *a) *kichik = *a;
	if(*b > *c) if(*a > *c) *kichik = *c;
	if(*c > *b) if(*a > *b) *kichik = *b;
}
