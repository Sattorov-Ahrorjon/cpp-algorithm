#include <iostream>
#include <cmath>
using namespace std;

void IsSquare(int a)
{
	int v;
	v = sqrt(a);
	int s = v;
	v = bool(v*v == a);
	if(v) cout << " True " << s;
	else cout << " False ";
}

int main()
{
	int K;
	cout << "(K>0) K = "; cin >> K;
	IsSquare(K);
return 0;
}
