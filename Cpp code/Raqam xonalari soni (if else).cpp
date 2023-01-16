#include <iostream>
using namespace std;
int main()
{
	int a ;
	cout<<"(1-999) Son kiriting:" ; cin >>a ;
	if ( a%2==1) {cout<<" Bu toq son  " << endl;
	}
	if ( a%2==0) {cout<<" Bu juft son"<<endl;
	}
	if (a>=1 && a<=9) {cout<<" Bir xonali son"  ;
	}
	else if (a>=10 && a<=99) {cout<<" Ikki xonali son" << endl;
	}
	else if (a>=100 && a<=999) {cout<<" Uch xonali son" << endl; 
	}
	else if(a>=1000) { cout<<" Iltimos (1-999) oraliqqa tegishli son kiriting"<< endl;
	}	 
	 return 0;
}
