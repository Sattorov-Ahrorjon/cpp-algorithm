#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int a, b, x, s=1, m=0, count;
	char v;
	cout << " \t BIROR SON KIRITING \n \tSHU  SONDAN  KICHIK  O'YLAYSIZ  VA  MEN  UNI TOPAMAN !!! "; cin >> a;
	x = a;
	srand(time(0));
	for(int i=0; i<=x; i++)
	{
		b = s + (rand() % a);
		cout << " \nSiz o'ylagan son : " << b;
		m = b;
		cout << " \nto'g'rimi  ( ha (1) kattaroq (+) kichik (-)) : "; cin >> v;
		if(v == '+')
		{
			s = m;
			count ++;
		}
		else if(v == '-')
		{
			a = m;
			count ++;
		}
		else if(v == '1')
		{
			cout << " \nMen o'ylagan soningizni " << count << " urinishda  topdim !!! ";
			break;
		}
	}
	
return 0;
}
