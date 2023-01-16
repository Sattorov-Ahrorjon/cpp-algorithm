#include <iostream>
using namespace std;
int main()
{
	int a = 55;
	int *u = &a ;
	int b = a* 45 ;
	a = b / 9;
	a = a / 5;
	a = a / 5;
	b = a + 4;
	a = b;
	cout << *u;
}
