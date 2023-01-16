#include <iostream>
using namespace std;

int Ishora(int a)
{
	if(a>0) a = 1;
	if(a==0) a = 0;
	if(a<0) a = -1;
	return a;
}

int main()
{
	int a, b, x, y;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << Ishora(a) + Ishora(b);
return 0;
}
