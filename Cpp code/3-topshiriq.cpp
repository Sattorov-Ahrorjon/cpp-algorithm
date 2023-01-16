#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float k1, k2 , y;
	
	cin>>k1;
	cin>>k2;
	if (k1*k2<1)
	{
		cout<<"1:"<<endl;
		y=sqrt(abs(2*k1-7*k2)); // Masala shartida berilgan qiymatlar kiritilsa ildiz ostidagi ifoda manfiy qiymatga ega bo'layapti.
		cout<<y;
	}
	
	if (k1*k2>=1)
	{
		cout<<"2:"<<endl;
		y=sqrt(2*k1+7*k2);
		cout<<y;
	}
}
