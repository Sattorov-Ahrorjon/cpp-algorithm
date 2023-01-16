#include <iostream>
using namespace std;
int main()
{
	float A1=1, A2=2, A=0, n;
	cout << "n = "; cin >> n;
	if( n==1 ) cout << A1;
	else if( n==2 ) cout << A1 << " " << A2;
	for(int i=3; i<=n; i++)
	{
		cout << A1 << " " << A2 << " ";
		A = (A1 + A2*2)/3;
		cout << A << " ";
		A1 = A2;
		A2 = A;
	}
return 0;
}
