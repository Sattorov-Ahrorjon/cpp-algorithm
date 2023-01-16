#include <iostream>
using namespace std;

int PrevDate(int *y, int *m, int *d)
{
	int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if( *y%400==0 || *y%4==0 && *y%100!=0 ) arr[1] = 29;
	
	if( *d==1 && *m > 1) {
		*d = arr[*m-2];
		*m = *m - 1;
	}
	
	else if ( *d == 1 && *m == 1 ){
		*y = *y - 1;
		*m = 12;
		*d = arr[*m-1];
	}
	
	else *d = *d - 1;
}

int main()
{
	int Y, M, D;
	cout << " Y = "; cin >> Y;
	cout << " M = "; cin >> M;
	cout << " D = "; cin >> D;
	PrevDate(&Y, &M, &D);
	cout << " Hozirgi holat :\n";
	cout << D << " - kun ";
	cout << M << " - oy ";
	cout << Y << " - yil ";
return 0;
}
