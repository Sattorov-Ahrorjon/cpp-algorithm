#include <iostream>
using namespace std;
int func(int c)
{	
	double x=0;
	while(c > 0){
		c/=10;
		x+=1;
	}
	return x;
}

int main()
{
	double a1;
	cout << "a1 = "; cin >> a1;
	cout << func(a1) << endl;

return 0;
}

