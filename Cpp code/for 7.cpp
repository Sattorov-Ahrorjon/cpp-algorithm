#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	for(int i=a+1; i<=b; i++)
	{
		a = a + i ;
	}
	cout << a;
return 0;
}
