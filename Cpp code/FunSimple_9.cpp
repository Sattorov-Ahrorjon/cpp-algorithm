#include <iostream>
using namespace std;

void AddLeftDigit(int a, int *b);

int main()
{
	int K, R;
	cout << " K = "; cin >> K;
	cout << " R = "; cin >> R;
	AddLeftDigit(K, &R);
	cout << R;
return 0;
}

void AddLeftDigit(int a, int *b)
{
	int on=10;
	while(a>=on)
	{
		on = on *10;
	}
	*b = *b* on;
	*b = a + *b;
}
