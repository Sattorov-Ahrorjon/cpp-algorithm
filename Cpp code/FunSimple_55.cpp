#include <iostream>
using namespace std;

int NextDate(int *d, int *m, int *y)
{
	
	int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if( *y%400==0 || *y%4==0 && *y%100!=0 ) arr[1] = 29;
	if( arr[*m-1] - *d != 0 && *m>1 ){
		*d = *d + 1;
	}
	if( arr[*m-1] == *d && *m != 12 ){
		*m = *m + 1;
		*d = 1;
	}
	if( *d == 31 && *m == 12 ){
		*d = 1;
		*m = 1;
		*y = *y + 1;
	}
}

int main()
{
	int D, Y, M;
	cout << "{kun} D = "; cin >> D;
	cout << " {oy} M = "; cin >> M;
	cout << "{yil} Y = "; cin >> Y;
	NextDate(&D, &M, &Y);
	cout << " " << D << " - kun  ";
	cout << M << " - oy  ";
	cout << Y << " - yil";
return 0;
}
