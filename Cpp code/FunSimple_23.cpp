#include <iostream>
using namespace std;

int Quarter(int x, int y)
{
	if(x>0 && y>0) return 1;
	else if(0>x && y>0) return 2;
	else if(0>x && 0>y) return 3;
	else if(x>0 && 0>y) return 4;
	else return 0;
}

int main()
{
	int X, Y;
	cout << " X = "; cin >> X;
	cout << " Y = "; cin >> Y;
	cout << Quarter(X, Y) << " - chorakda yotadi ";
return 0;
}
