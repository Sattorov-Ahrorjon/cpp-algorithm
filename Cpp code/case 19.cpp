#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int muchal;
	int yil;
	cin >> yil;
//	cout << "\n" << (yil + 11) % 12  +1;
	muchal = (yil + 11) % 12 - 3 ;
	switch( muchal )
	{
		case 1: cout << "Sichqon ";break;
		case 2: cout << "Sigir ";break;
		case 3: cout << "Yo'lbars ";break;
		case 4: cout << "Quyon ";break;
		case 5: cout << "Ajdar ";break;
		case 6: cout << "Ilon ";break;
		case 7: cout << "Ot ";break;
		case 8: cout << "Qo'y ";break;
		case 9: cout << "Maymun ";break;
		case 10: cout << "Tovuq ";break;
		case 11: cout << "It ";break;
		case 12: cout << "To'ng'iz ";break;
	}
	float rang = yil;
	while(rang > 5)
	rang = ceil(rang / 12);
	cout << "\n" << rang;
	int rang1 = rang-1 ;
	switch( rang1 )
	{
		case 1: cout << "yashil"; break;
		case 2: cout << "qizil"; break;
		case 3: cout << "sariq"; break;
		case 4: cout << "oq"; break;
		case 5: cout << "qora"; break;
	}
}
