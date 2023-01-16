#include <iostream>
using namespace std;

float PowerA3( float a )
{
	a = a*a*a;
	return a;
}

int main()
{
	int A, B, C;
	float D, E;
	cout << "(int) A = ";
	cin >> A;
	cout << "(int) B = ";
	cin >> B;
	cout << "(int) C = ";
	cin >> C;
	cout << "(float) D = ";
	cin >> D;
	cout << "(float) E = ";
	cin >> E;
	cout << PowerA3(A) << endl;
	cout << PowerA3(B) << endl;
	cout << PowerA3(C) << endl;
	cout << PowerA3(D) << endl;
	cout << PowerA3(E) << endl;
return 0;
}
