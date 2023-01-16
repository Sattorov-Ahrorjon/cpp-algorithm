#include <iostream>

using namespace std;

int main()
{
	float a , b ;
	int x=1;
	cout<<"1-qo'shish amali  \n2-ayirish amali  \n3-ko'paytirish amali  \n4-bo'lish amali \n0-Yakunlash"<<endl;
	 while(x!=0){ nishon:
	 cout<<"Son kiriting:" ; cin>>x;
	 if(x>4)
	 {
	 	cout << "Bunday amal mavjud emas . Iltimos boshqa son kiriting!\n";
	 	goto nishon;
	 	
	 }
	 else{
	 
	 switch(x)
	 {
	 
	 	case 1 : {
		cout<<"Siz qo'shish amalini tanladingiz\n";
	 	cout<<"b="; cin >>b;
		cout<<"a="; cin >>a; 
	 
		cout<<a<<"+"<<b<<"="<<a+b<<endl; break;
			}
	 	case 2 : {
	 
	 	 cout<<"Siz ayirish amalini tanladingiz\n";
	 	cout<<"a="; cin >>a; 
	        cout<<"b="; cin >>b;
		 cout<<a<<"-"<<b<<"="<<a-b<<endl; break;
		 }
	 	case 3 : {
	 	 cout<<"Siz ko'paytirish amalini tanladingiz\n";
	 	 cout<<"a="; cin >>a; 
		 cout<<"b="; cin >>b;
	 
		 cout<<a<<"*"<<b<<"="<<a*b<<endl; break;
			}
	 	case 4 : {
	 	 cout<<"Siz bo'lish amalini tanladingiz\n";
	 	 cout<<"a="; cin >>a; 
		 cout<<"b="; cin >>b;
	 
		 cout<<a<<"/"<<b<<"="<<a/b<<endl; break;}
	 }
		}
	 }
	 cout << "Jarayon yakunlandi !!!";
}
