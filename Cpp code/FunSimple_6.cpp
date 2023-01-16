#include <iostream>
#include <cmath>
using namespace std;

void DigitCountSum(int a, int *n, int *s);

int main()
{
	int a, b, c;
	int n=0, s=0;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	DigitCountSum(a, &n, &s);
	int n1=0, s1=0;
	DigitCountSum(b, &n1, &s1);
	int n2=0, s2=0;
	DigitCountSum(c, &n2, &s2);
	cout << " Raqamlari soni = " << n << "  Raqamlari yig'indisi = " << s << endl;
	cout << " Raqamlari soni = " << n1 << " Raqamlari yig'indisi = " << s1 << endl;
	cout << " Raqamlari soni = " << n2 << "  Raqamlari yig'indisi = " << s2 << endl;
return 0;
}

void DigitCountSum(int a, int *n, int *s)
{
	int on=10, a1=a, count=1;
	while(a>=on)
	{
		on = on*10;
		count++;
	}
	*n = count;
//	on = on/10;
	while(a>0)
	{
		while(a1>=1)
		{
			a1 = a1%10;
			*s = *s + a1;
			break;
		}
		a1 = a/10;
		a = a1;
	}
}
