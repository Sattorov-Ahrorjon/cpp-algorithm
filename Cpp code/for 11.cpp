#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, count=0, sum=0;
	cout << "n = "; cin >> n;
	for (int i=0; i<=n; i++)
	{
		sum = sum + pow(n+i, 2);
		count ++;
	}
	cout << " sum = " << sum;
}
