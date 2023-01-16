#include <iostream>
#include <cmath>
using namespace std;

void MEAN(float A, float B, float *a, float *b);

int main()
{
	float A=2, B=4, C=6, D=8;
	float a, b;
	MEAN(A, B, &a, &b);
	cout << a << endl;
	cout << b << endl << endl;
	MEAN(A, C, &a, &b);
	cout << a << endl;
	cout << b << endl << endl;
	MEAN(A, D, &a, &b);
	cout << a << endl;
	cout << b << endl << endl;
return 0;	
}

void MEAN(float A, float B, float *a, float *b)
{
	*a = (A+B)/2;
	*b = sqrt(A*B);
}
