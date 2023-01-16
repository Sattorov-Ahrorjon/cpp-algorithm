#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
	ofstream yozish;
	yozish.open("namuna.txt");
	int y, x, a, b;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	for(int i=a; i<=b; i+=0.1)
	{
		y = sqrt( pow(x,3) + pow(x,2) + x );
		yozish << y << endl;
	}
	yozish.close();	
return 0;
}
