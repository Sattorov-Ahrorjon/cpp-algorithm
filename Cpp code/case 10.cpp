#include <iostream>
using namespace std;
int main()
{
	int k;
	char c;
	cout << "'s'-shimol, 'j'-janub, 'g'-garb, 'q'-sharq" << " Y = ";
	cin >> c;
	cout << "1-chapga, 2-o'ngga, 0-harakatda davom et "<< " K = ";
	cin >> k;
	switch(c)
	{
		case 's': cout << "Shimol tomonga "; break;
		case 'j': cout << "Janub tomonga "; break;
		case 'g': cout << "G'arb tomonga "; break;
		case 'q': cout << "Sharq tomonga "; break;
	}
	switch(k)
	{
		case 0: cout << "harakatlanmoqda\n";break;
		case 1: cout << "yani chapga burildi\n"; break;
		case 2: cout << "yani o'ngga burildi\n"; break;
	}
}
