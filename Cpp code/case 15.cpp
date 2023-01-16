#include <iostream>
using namespace std;
int main()
{
	int M, N;
	cout << "\a Karta qiymatini kiriting (1-14) : "; cin >> N;
	cout << "\a 1-g'isht, 2-olma, 3-chillak, 4-qarg'a\n";
	cout << "M = "; cin >> M;
	switch(N)
	{
		case 1: cout << "bir - "; break;
		case 2: cout << "ikki - "; break;
		case 3: cout << "uch - "; break;
		case 4: cout << "to'rt - "; break;
		case 5: cout << "besh - "; break;
		case 6: cout << "olti - "; break;
		case 7: cout << "yetti - "; break;
		case 8: cout << "sakkiz - "; break;
		case 9: cout << "to'qqiz - "; break;
		case 10: cout << "o'n - "; break;
		case 11: cout << "valet - "; break;
		case 12: cout << "dama - "; break;
		case 13: cout << "qirol - "; break;
		case 14: cout << "tuz - "; break;
	}
	switch(M)
	{
		case 1: cout << "G'isht"; break;
		case 2: cout << "Olma"; break;
		case 3: cout << "Chillak"; break;
		case 4: cout << "Qarg'a"; break;
	}
}
