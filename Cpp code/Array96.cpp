#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	v = 0;
	
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j+=1)
		{
			if(arr[i] == arr[j])
			{
				arr[j] = 0;
			}
		}
	}
	cout << endl << endl;
	int j=0;
	
	while(j != n)
	{
		if(arr[j] == 0) v++;
		
		if(arr[j] == 0)
		{
			for(int i=j; n>i; i++)
			{
				arr[i] = arr[i+1];
			}
		}
		
		j+=1; cout << " J = " << j;
	}
	cout << endl << endl;
	n = n - v;
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
