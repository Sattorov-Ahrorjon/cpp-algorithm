#include <iostream>
using namespace std;

int MonthDays(int m, int y)
{
	int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if(y%400==0 || y%4==0 && y%100!=0) arr[1] = 29;
	return arr[m-1];
}

int main()
{
	int M, Y;
	cout << " Y = "; cin >> Y;
	cout << " M = "; cin >> M;
	cout << MonthDays(M, Y);
return 0;
}
