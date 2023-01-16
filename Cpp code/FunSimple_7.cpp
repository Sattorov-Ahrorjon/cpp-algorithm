#include <iostream>
using namespace std;
void InvertDigit(int *a);
int main()
{
	int a, b, c;
	cout << " a = "; cin >> a;
	InvertDigit(&a);
	cout << " b = "; cin >> b;
	InvertDigit(&b);
	cout << " c = "; cin >> c;
	InvertDigit(&c);
	cout << " " << a << endl;
	cout << " " << b << endl;
	cout << " " << c << endl;
return 0;
}

void InvertDigit(int *a)
{
	int x=*a, on=10, sum=0, one=10;
	while(x>=on)
	{
		on = on* 10;
	}
	on = on/10;
	
	while(on != 0)
	{
		while(x>=1)
		{
			x = x%10;
			sum = sum + x* on;
			break;
		}
		x = *a/one;
		one = one* 10;
		on = on /10;
	}
	*a = sum;
}
