#include <iostream>
using namespace std;
int main()
{
	int n, a, v, j=0;
	cout << " n = "; cin >> n;
	int arr[n];
	v = n;
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] == arr[j])
			{
				v--;
			}
		}
		
	}
	cout << " Javob = " << v;
return 0;
}
