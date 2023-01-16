#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	int s , m , c ;
	int Soat , Min , Cek ;
	cout<<"Soat="; cin>>s;
	cout<<"Minut="; cin>>m;
	cout<<"Cekund="; cin>>c;
	Soat=s*30;
	Min=m*6;
	Cek=c*6;
	cout<<"Soat^Minut="<<Soat-Min<<endl;
	cout<<"Soat^Cekund="<<Soat-Cek<<endl;
	cout<<"Minut^Cekund="<<Min-Cek<<endl;
	return 0;
	
}
