#include <iostream>
using namespace std;

void Minmax(int *a, int *b);

int main()
{
	int a, b, c, d;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	Minmax(&a, &b);
	Minmax(&a, &c);
	Minmax(&a, &d);
	cout << " Eng kattasi = " << a << endl;
return 0;
}

void Minmax(int *max, int *min)
{
	if(*min > *max) *max = *min;
}
