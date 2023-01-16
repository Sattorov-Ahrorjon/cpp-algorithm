#include <iostream>
using namespace std;
int main()
{
	int F=0, F1=0, F2=1, x=2, n;
	cout << " Fibonachi son kiriting  n = "; cin >> n;
	while( n != F )
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
		x++;
	}
	cout << " Bu son fibanachi qatorning " << x << " - elementi ";
return 0;
}
