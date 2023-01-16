#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "n = ";cin >> n;
	int a,b,c,d;
	a=n/1000;
	b=n/100%10;
	c=n/10%10;
	d=n%10;
	int e=0;
	cout << "Min : " << min(a,min(b,min(c,d))) << endl;
	cout << "Max : " << max(a,max(b,max(c,d)));
	return 0;
}
