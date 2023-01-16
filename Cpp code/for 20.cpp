#include <iostream>
using namespace std;
int main()
{
	int a, sum=0, con=1;
	cout << " son kirit : "; cin >> a;
	for(int i=1; i<=a; i++)
	{
		con = con* i;
		cout << i << " - factorial >> " << con << endl;
		sum = sum + con;
	}
	cout << " Barchasining yig'indisi >> " << sum;
return 0;
}
