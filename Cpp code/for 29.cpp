#include <iostream>
using namespace std;
int main()
{
	float A, B, uzunlik, uzun_b, n;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " n = "; cin >> n;
	uzunlik = B - A;
	uzun_b = uzunlik / n;
	for(float i=A; i<=B; i+=uzun_b)
	{
		cout << i << "  ";
	}
return 0;
}
