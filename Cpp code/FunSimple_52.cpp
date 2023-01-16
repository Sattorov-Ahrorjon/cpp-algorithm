#include <iostream>
using namespace std;

void IsLeapYear(int a)
{
	int x;
	if(a>100) x = bool(a%400==0);
	else x = bool(a%4==0);
	if(x) cout << " True";
	else cout << " False";
}

int main()
{
	int a1, a2, a3, a4, a5;
	cout << " a1 = "; cin >> a1;
	cout << " a2 = "; cin >> a2;
	cout << " a3 = "; cin >> a3;
	cout << " a4 = "; cin >> a4;
	cout << " a5 = "; cin >> a5;
	cout << a1 << " - yil kabisa yili "; IsLeapYear(a1);
	cout << endl << a2 << " - yil kabisa yili "; IsLeapYear(a2);
	cout << endl << a3 << " - yil kabisa yili "; IsLeapYear(a3);
	cout << endl << a4 << " - yil kabisa yili "; IsLeapYear(a4);
	cout << endl << a5 << " - yil kabisa yili "; IsLeapYear(a5);
return 0;
}
