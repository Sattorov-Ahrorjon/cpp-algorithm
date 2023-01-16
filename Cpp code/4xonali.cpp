#include <iostream>
using namespace std;
int main ()
{
	int n,max=0,maxi,mini,min;
	cout << "n = ";cin >> n;
	int a[3];
	a[0]=n/1000;
	a[1]=n/100%10;
	a[2]=n/10%10;
	a[3]=n%10;
	
	min=a[0];
	for (int i=0;i<4;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			maxi=i;	
		}
		
		if(min >= a[i]) {
			min = a[i];
			mini = i;
		}
	}
	cout << a[maxi]<<0<<0<<a[mini];
}
