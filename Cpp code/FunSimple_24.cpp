#include <iostream>
using namespace std;

void Even(int a)
{
	if( a>0 ) cout << " True";
	else cout << " False";
}

int main()
{
	int K;
	cout << " K = "; cin >> K;
	Even(K);
return 0;
}
