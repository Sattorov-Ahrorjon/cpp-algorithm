#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, con=1;
	float sum=1;
	cout << " son kiriting : "; cin >> a;
	for (int i=1; i<=a; i++)
	{
		con = con* i;
		cout << con << "  ";
		sum = sum + 1./con;
		
	}
	cout << sum ;
}
