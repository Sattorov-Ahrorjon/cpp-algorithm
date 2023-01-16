#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<" (1-5) Raqam kiriting a=";
	cin >> a;
	cout<<endl;
	switch (a)
	 {case 1: cout <<"1 kiritildi"; cout<<endl ; break;
	 case 2 : cout <<"2 kiritildi"; cout<<endl; break;
	 case 3 : cout <<"3 kiritildi"; cout<<endl; break;
	 case 4 : cout<<"4 kiritildi"; cout<<endl; break;
	 case 5 : cout<<"5 kiritildi"; cout<<endl; break;
	 default : cout <<"Oraliqga tegishli bo'lmagan raqam kiritildi'"; cout<<endl; break;
	}
	main();
	

}
