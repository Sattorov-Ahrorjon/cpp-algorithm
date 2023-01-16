#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d;
vek:	cout << " {1 <= a <= 8} {1 <= b <= 8} {1 <= c <= 8} {1 <= d <= 8}" << endl;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	if( a<1 or a>8 or b<1 or b>8 or c<1 or c>8 or d<1 or d>8) {
		cout << " Xato qiymat kiritdingiz !!! \n"; goto vek;
	}
	
	if( abs(a-c) != 2 or abs(b-d) != 2 ) cout << " False ";
	else cout << " True ";
return 0;
}
