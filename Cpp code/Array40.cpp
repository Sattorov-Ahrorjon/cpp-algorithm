#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, n, v, r, jav;
	cout << " n = "; cin >> n;
	int arr[n];
	cout << " R = "; cin >> r;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	a = abs(arr[0] - r) + 1;
	for(int i=0; n>i; i++)
	{
		v = abs(arr[i] - r);		
		if(a > v){			
			a = v;
			jav = arr[i];
		}
	}
	cout << " Javob = " << jav;
return 0;
}
