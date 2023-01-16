#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	b = a % 10; // 1 lar honasi
	a = a/10;
	c = a % 10; // 10 lar honasi
	a = a / 10; // 100 lar honasi
	switch(a)
	{
		case 1 : cout << " Bir yuzi "; break;
		case 2 : cout << " Ikki yuzi "; break;
		case 3 : cout << " Uch yuzi "; break;
		case 4 : cout << " To'rt yuzi "; break;
		case 5 : cout << " Besh yuzi "; break;
		case 6 : cout << " Olti yuzi "; break;
		case 7 : cout << " Yetti yuzi "; break;
		case 8 : cout << " Sakkiz yuzi "; break;
		case 9 : cout << " To'qqiz yuzi "; break;
	}
	switch(c)
	{
		case 1 : cout << " O'n "; break;
		case 2 : cout << " Yigirma "; break;
		case 3 : cout << " O'ttiz "; break;
		case 4 : cout << " Qiriq "; break;
		case 5 : cout << " Ellik "; break;
		case 6 : cout << " Oltmish "; break;
		case 7 : cout << " Yetmish "; break;
		case 8 : cout << " Sakson "; break;
		case 9 : cout << " To'qson "; break;
	}
	switch(b)
	{
		case 1 : cout << " Bir"; break;
		case 2 : cout << " Ikki"; break;
		case 3 : cout << " Uch"; break;
		case 4 : cout << " To'rt'"; break;
		case 5 : cout << " Besh"; break;
		case 6 : cout << " Olti"; break;
		case 7 : cout << " Yetti"; break;
		case 8 : cout << " Sakkiz"; break;
		case 9 : cout << " To'qqiz'"; break;
	}
return 0;
}
