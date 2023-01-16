#include <iostream>
using namespace std;
int main()
{
	int a, v;
	cout << "Yoshingizni kiriting (1-99) : "; cin >> a;
	v = a % 10;
	a = a / 10;
	switch(a)
	{
		case 1: cout << "O'n "; break;
		case 2: cout << "Yigirma "; break;
		case 3: cout << "O'ttiz "; break;
		case 4: cout << "Qiriq "; break;
		case 5: cout << "Ellik "; break;
		case 6: cout << "Oltmish "; break;
		case 7: cout << "Yetmish "; break;
		case 8: cout << "Sakson "; break;
		case 9: cout << "To'qson "; break;
	}
	switch(v)
	{
		case 1: cout << "bir"; break;
		case 2: cout << "ikki"; break;
		case 3: cout << "uch"; break;
		case 4: cout << "to'rt"; break;
		case 5: cout << "besh"; break;
		case 6: cout << "olti"; break;
		case 7: cout << "yetti"; break;
		case 8: cout << "sakkiz"; break;
		case 9: cout << "to'qqiz"; break;
	}
}
