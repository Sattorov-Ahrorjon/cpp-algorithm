#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int x, y, x1, y1;
	cout << "x = "; cin >> x;
	cout << "x1 = "; cin >> x1;
	cout << "y = "; cin >> y;
	cout << "y1 = "; cin >> y1;
	if(1 <= x && x <= 8 && 1<= y && y <= 8)
	{
		if((abs(x-x1)==2 && abs(y-y1)==1) || (abs(x-x1)==1 && abs(y-y1)==2))
		
		{
			cout << "Oq";
		}
		else 
		{
			cout << "Qora";
		}
		
	}
	else
	cout << "Xato kordinata";
return 0;

}
