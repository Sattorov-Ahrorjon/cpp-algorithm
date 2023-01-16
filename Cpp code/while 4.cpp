#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "n = "; cin >> n;
	while( n>=3 )
	{
		n = n - 3;
	}
	if( n==0 )
	{
		cout << "3 ga karrali son";
	}
	else cout << "3 ga karrali emas";
return 0;
}
