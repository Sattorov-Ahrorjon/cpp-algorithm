#include <iostream>
using namespace std;

int SumRange(int a, int b)
{
	int v=0;
	if(a>b) v=0;
	else
	{
		while(a!=b)
		{
			v = v + a;
			a++;
		}
		v = v + b;
	}
	return v;
}

int main()
{
	int A, B, C;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " C = "; cin >> C;
	cout << " A dan B gacha = " << SumRange(A, B) << endl;
	cout << " B dan C gacha = " << SumRange(B, C);
return 0;
}
