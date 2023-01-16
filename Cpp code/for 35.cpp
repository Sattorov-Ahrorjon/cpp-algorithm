#include <iostream>
using namespace std;
int main()
{
	int A, A1=1, A2=2, A3=3, n;
	cout << "n = "; cin >> n;
	if( n==1 ) cout << A1;
	else if( n==2 ) cout << A1 << " " << A2;
	else if( n>=3 ) cout << A1 << " " << A2 << " " << A3;
	for(int i=4; i<=n; i++)
	{
		//cout << A1 << " " << A2 << " " << A3 << " ";
		A = A3 + A2 - A1*2;
		cout << " " << A << " ";
		A1 = A2;
		A2 = A3;
		A3 = A;
	}
return 0;
}
