#include <iostream>
using namespace std;

int EKUB(int a, int b, int c){
	int e, s=(a+b+c)/3, i=1;
	while(s!=i)
	{
		if(a%i==0 and b%i==0 and c%i==0)
		{
			e=i;  i++;
		}
		else  i++;
	}
	return e;
}

int main()
{
	int a, b, c, d;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	cout << " EKUB(a, b, c) = " << EKUB(a, b, c);
	cout << " EKUB(a, b, d) = " << EKUB(a, b, d);
	cout << " EKUB(a, c, d) = " << EKUB(a, c, d);
return 0;
}
