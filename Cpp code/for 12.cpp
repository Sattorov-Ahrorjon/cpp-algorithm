#include <iostream>
using namespace std;
int main()
{
	int n, count=0;
	float sum=1;
	cout << " n = "; cin >> n;
	for (float i=1; i<=n; i++)
	{
		sum = sum* (1+i/10);
		count ++;
	}
	cout << " sum = " << sum;
}
