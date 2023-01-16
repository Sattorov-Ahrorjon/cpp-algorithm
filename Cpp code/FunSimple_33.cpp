#include <iostream>
using namespace std;

float RadToDeg(float R)
{
	R = (R*180)/3.1415;
	return R;
}

int main()
{
	float r;
	cout << " {Radian} R = "; cin >> r;
	cout << "Javob = " << RadToDeg(r);
return 0;
}
