#include <iostream>
using namespace std;
float Pi = 3.1415;

float Yuza(int r)
{
	return Pi*r*r;
}

int main()
{
	int R;
	cout << " R = "; cin >> R;
	cout << " Yuza = " << Yuza(R);
return 0;
}
