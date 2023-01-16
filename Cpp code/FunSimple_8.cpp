#include <iostream>
using namespace std;

void AddRightDigit(int a, int *b);

int main()
{
	int K, R;
	cout << " K = "; cin >> K;
	cout << " R = "; cin >> R;
	AddRightDigit(K, &R);
	cout << R;
return 0;
}

void AddRightDigit(int a, int *b)
{
	a = a* 10;
	*b = a + *b;
}
