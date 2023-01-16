#include <iostream>

using namespace std;

int main()
{
	int a=1 , b=1;
	cout<<"Son kiriting"<<endl;
	cout<<"a ="; cin>>a;
	cout<<"b ="; cin>>b;
	cout<<"Amal tanlang :";
	cout<<"  1(+)  "<<"  2(-)"  <<"  3(*)  "<<"  4(/)  "<<endl;
	{
	int c;
	cin >> c;
	switch (c){
		case 1 : cout<<a<<"+"<<b<<"="<<a+b; cout<<endl; break;
		case 2 : cout<<a<<"-"<<b<<"="<<a-b; cout<<endl; break;
		case 3 : cout<<a<<"*"<<b<<"="<<a*b; cout<<endl; break;
		case 4 : cout<<a<<"/"<<b<<"="<<a/b; cout<<endl; break; 
	}}
	main();
}
