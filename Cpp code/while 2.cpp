#include <iostream>
using namespace std;
int main()
{
	int A, B, v=0;
	cout << "A > B"<< endl;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	while( A>=B )
	{
		A = A-B;
		v++;
	}
	cout << v << " ta.";
return 0;
}
