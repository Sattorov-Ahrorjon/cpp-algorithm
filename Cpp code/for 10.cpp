#include <iostream>
using namespace std;
int main()
{
	int n ;
	float sum=0;
	cout << "n : "; cin >> n;
	for(int i=1; i<=n; i++)
	{
		sum = sum + 1./i;
	}
	cout << "javob : " << sum;
}
