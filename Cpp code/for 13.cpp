#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float sum=0;
	cout << "n = "; cin >> n;
	for (float i=0; i<n; i++)
	{
		sum = sum + (1.1 + i/10)*pow(-1,i);
	}
	cout << " sum = " << sum;
return 0;
}
