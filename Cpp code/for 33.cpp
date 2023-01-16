#include <iostream>
using namespace std;
int main()
{
	double n, F=0, F1=0, F2=1;
	cout << "n = "; cin >> n;
	if( n==1 ) cout << F1;
	else if( n==2 ) cout << F1 << " " << F2 << " ";
	else if( n>=3 )
	{
		cout << F1 << " ";
		cout << F2 << " ";
		for(int i=3; i<=n; i++)
		{
			F = F1 + F2;
			F1=F2;
			F2=F;
			cout << F << " ";
		}
	}
return 0;
}
