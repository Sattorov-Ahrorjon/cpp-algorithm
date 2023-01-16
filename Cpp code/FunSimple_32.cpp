#include <iostream>
using namespace std;

float DegToRad(float D)
{
	D = (D * 3.1415)/180;
	return D;
}

int main()
{
	float d;
	cout << "{360>=D>=0} D = "; cin >> d;
	cout << " D >> Rad >> " << DegToRad(d);
return 0;
}
