#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a[5] = {5.75,-6,3.4,-2.5,3.6};
	float b[5] = {-3.4,-0.5,8.45,4.3,5.6};
	float c[5];
	for (int i=0; i<5; i++)
	{
		c[i]=(a[i] + b[i]) / (a[i] * a[i] * sqrt( b[i] )) * i;
		cout << c[i] << "  ";
	}
	
	// b massivning 1 va 2 elementlari manfiy bolganligi uchun ildizdan nan javob chiqayapti
	//  shu sababli kvadratga ko'tarishda xatolok yuz berayapti
	
	cout << endl << " Kvadratlari yig'indisi = " << ( pow(c[0],2) + pow(c[1],2) + pow(c[2],2) + pow(c[3],2) + pow(c[4],2) );
}

