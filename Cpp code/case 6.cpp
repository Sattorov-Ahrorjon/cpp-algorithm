#include <iostream>
using namespace std;
int main()
{
	float a;
	int c;
	cin >> a;
	cout << "1-detsimetr, 2-kilometr, 3-metr, 4-millimetr, 5-santimetr" << endl;
	cin >> c;
	switch(c)
	{
		case 1: cout << a / 10 << " metr"; break;
		case 2: cout << a * 1000 << " metr"; break;
		case 3: cout << a << " metr"; break;
		case 4: cout << a/1000 << " metr"; break;
		case 5: cout << a/100 << " metr"; break;
	}
}
