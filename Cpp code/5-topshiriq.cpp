#include <iostream>

using namespace std;

int main() {
	int a, w, R;
	cout << "Eramizning biror yilini kiriting :"; 
	cin>>a;
	w=((a % 12) * 12) / 10;
	//R=a%12;
	switch(w)
	{
		case 4 : cout << "sichqon" << endl; break;
		case 5 : cout << "sigir" << endl; break;
		case 6 : cout << "yo'lbars" << endl; break;
		case 7 : cout << "quyon" << endl; break;
		case 8 : cout << "ajdarho" << endl; break;
		case 9 : cout << "ilon" << endl; break;
		case 10 :cout << "ot" << endl; break;
		case 11: cout << "qo'y" << endl; break;
		
		case 0: cout << "maymun" << endl; break;
		case 1 : cout << "tovuq" << endl; break;
		case 2 : cout<<"it"<<endl; break;
		case 3 : cout<<"to'ng'iz"<<endl; break;
		
	}
	
	
}
