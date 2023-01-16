#include <iostream>
using namespace std;

void IncTime(int h, int m, int s)
{
	cout << " Berilgan vaqt = " << h*3600 + m*60 + s << " sekundga teng";
}

int main()
{
	int H, M, S, T;
	cout << " H = "; cin >> H;
	cout << " M = "; cin >> M;
	cout << " S = "; cin >> S;
//	cout << " T = "; cin >> T;
	IncTime(H, M, S);
return 0;
}
