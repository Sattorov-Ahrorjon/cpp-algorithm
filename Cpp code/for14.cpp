#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "n = "; cin >> n;
	for (int i=1; i<2*n; i+=2)
	{
		sum = sum + i;
		
	}
	cout << " sum = " << sum;
}
