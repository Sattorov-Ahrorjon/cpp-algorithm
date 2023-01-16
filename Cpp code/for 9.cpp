#include <iostream>
using namespace std;
int main()
{
	int a, b, sum=0;
	cout << "a < b\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	for(int i=a; i<=b; i++)
	{
		sum = sum + i*i;
	}
	cout << "javob : " << sum;
}
