
#include <iostream>

using namespace std;

int main()
{
	int ks,minglar , yuzlar , onlar , birlar;
	cout<<"(1-9999) Raqam kiriting : "; 
	cin >> ks ;
	minglar = ks / 1000;
	switch(minglar)
	 {
	 	//minglar xonasi
	 case 1: cout <<"Bir Ming "; break;
	 case 2: cout <<"Ikki Ming "; break;
	 case 3: cout <<"Uch Ming "; break;
	 case 4: cout <<"To'rt Ming "; break;
	 case 5: cout <<"Besh Ming "; break;
	 case 6: cout <<"Olti Ming "; break;
	 case 7: cout <<"Yetti Ming "; break;
	 case 8: cout <<"Sakkiz Ming "; break;
	 case 9: cout <<"To'qqiz Ming "; break;
	 }
	 yuzlar = ks / 100 % 10;
	 switch(yuzlar)
	{
	 	//yuzlar xonasi
	 case 1: cout <<"Bir Yuz "; break;
	 case 2: cout <<"Ikki Yuz "; break;
	 case 3: cout <<"Uch Yuz "; break;
	 case 4: cout <<"To'rt Yuz "; break;
	 case 5: cout <<"Besh Yuz "; break;
	 case 6: cout <<"Olti Yuz "; break;
	 case 7: cout <<"Yetti Yuz "; break;
	 case 8: cout <<"Sakkiz Yuz "; break;
	 case 9: cout <<"To'qqiz Yuz "; break;
	 }
	 onlar = ks % 100 / 10;
	  switch(onlar)
	{
	 	//onlar xonasi
	 case 1: cout <<"O'n "; break;
	 case 2: cout <<"Yigirma "; break;
	 case 3: cout <<"O'ttiz "; break;
	 case 4: cout <<"Qirq "; break;
	 case 5: cout <<"Ellik "; break;
	 case 6: cout <<"Oltimish "; break;
	 case 7: cout <<"Yetmish "; break;
	 case 8: cout <<"Sakson "; break;
	 case 9: cout <<"To'qson "; break;
	 }
	 birlar = ks % 10;
	  switch(birlar)
	{
	 	//birlar xonasi
	 case 1: cout <<"Bir "<<endl; break;
	 case 2: cout <<"Ikki "<<endl; break;
	 case 3: cout <<"Uch "<<endl; break;
	 case 4: cout <<"To'rt "<<endl; break;
	 case 5: cout <<"Besh "<<endl; break;
	 case 6: cout <<"Olti "<<endl; break;
	 case 7: cout <<"Yetti "<<endl; break;
	 case 8: cout <<"Sakkiz "<<endl; break;
	 case 9: cout <<"To'qqiz "<<endl; break;
	 }
	 main();
	 
}
