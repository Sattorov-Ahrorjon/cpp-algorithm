#include <iostream>

using namespace std;

int main()
{
	int a , b , c , g=0;
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"c= "; cin>>c;
	
	if (a>=b && b>=c)
	{	g=c;
		c=a;
		a=g;
		cout<<a<<"<="<<b<<"<="<<c<<endl;
	}
	else if (b>=a && a>=c)
	{
		g=b;
		b=a;
		a=c;
		c=g;
		cout<<a<<"<="<<b<<"<="<<c<<endl;
	}
	else if (a>=c && c>=b)
	{
		g=a;
		a=b;
		b=c;
		c=g;
		cout<<a<<"<="<<b<<"<="<<c<<endl;
	}
	else if (c>=a && a>=b)
	{
		g=a;
		a=b;
		b=g;
		cout<<a<<"<="<<b<<"<="<<c<<endl;
	}
	else if (c>=b && b>=a)
	{
		cout<<a<<"<="<<b<<"<="<<c<<endl;
	}
	main();
}
