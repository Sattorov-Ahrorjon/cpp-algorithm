#include <iostream>
using namespace std;
int main()
{
	int A, B, count=0;
	cout << " A > B " << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	while( A>=B )
	{
		A = A - B;
		count++;
	}
	cout << count << " - ta joylashtirish mumkin." << endl;
	cout << "Qoldiq qiymat = " << A << endl;
return 0;
}
