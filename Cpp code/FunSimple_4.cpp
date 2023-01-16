#include <iostream>
#include <cmath>
using namespace std;

void Triangle(float a, float *z, float *t)
{
	*z = sqrt(3)*a*a/4;
	*t = 3*a;
}

int main()
{
	float a=3, b=5, c=7;
	float s, p;
	Triangle(a, &s, &p);
	cout << " Yuzasi  = " << s << "  Perimetri = " << p << endl;
	Triangle(b, &s, &p);
	cout << " Yuzasi  = " << s << "  Perimetri = " << p << endl;
	Triangle(c, &s, &p);
	cout << " Yuzasi  = " << s << "  Perimetri = " << p << endl;
return 0;
}
