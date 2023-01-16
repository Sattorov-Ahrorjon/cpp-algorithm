#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float r , l , s ,v ;
	const double p=3.1415;
	cout<<"R="; cin>>r;
	cout<<"L="<<2*p*r<<endl;
	cout<<"S="<<p*pow(r,2)<<endl;
	cout<<"V="<<(4/3)*p*pow(r,3)<<endl;
}
