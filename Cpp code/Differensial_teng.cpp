#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, e = 2.71;
	float arr[5], brr[5];
	
//	y = 2.8 * pow(e, 0.2 * x) - 0.5 * x - 2.5;
	
	for(int i=0; 5>i; i++)
	{
		cout << " x" << i << " = "; cin >> arr[i];
	}
	
	for(int i=0; 5>i; i++)
	{
		brr[i] = 2.8 * pow(e, 0.2 * arr[i]) - 0.5 * arr[i] - 2.5;
	}
	cout << "|   X(i)   |   Y(i)   |" << endl;
	
	for(int i=0; 5>i; i++)
	{
		cout << " X" << i << " = " << arr[i] ;
		cout << "    Y" << i << " = " << brr[i] << endl;
	}
return 0;
}
