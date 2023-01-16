#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float a , y;
	cin>>a;
	y=1-1./4*sin(2*a)*sin(2*a)+cos(2*a);
	cout<<"Y= "<<y;
}
