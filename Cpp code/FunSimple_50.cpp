#include <iostream>
using namespace std;

void TimeToHMS(int a)
{
	int H = a/3600, M = (a-H*3600)/60, S = (a-(H*60+M)*60)%60;
	cout << "  " << H << ":" << M << ":" << S << endl;
}

int main()
{
	int t1, t2, t3;
	cout << " T1 = "; cin >> t1;
	cout << " T2 = "; cin >> t2;
	cout << " T3 = "; cin >> t3;
	TimeToHMS(t1);
	TimeToHMS(t2);
	TimeToHMS(t3);
return 0;
}
