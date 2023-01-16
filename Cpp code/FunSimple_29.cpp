#include <iostream>
using namespace std;

void DigitCount(int k, int *n)
{
	int count=1;
	while(k > 9)
	{
		k = k/ 10;
		count++;
	}
	*n = count;
}

int main()
{
	int a, n, arr[5];
	cout << " 5 ta son kiriting\n";
	for(int i=0; i<5; i++)
	{
		cout << i+1 << " - son = "; cin >> a;
		arr[i] = a;
	}
	for(int j=0; j<5; j++)
	{
		DigitCount(arr[j], &n);
		cout << "  " << arr[j] << " soni ";
		cout << n << " ta raqamdan iborat.\n";
	}
	
return 0;
}
