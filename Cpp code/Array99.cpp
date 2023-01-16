#include <iostream>
using namespace std;
int main()
{
	int n, v, count;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=i+1; n>j; j++)
		{
			if(arr[i] == arr[j]) { count +=1; v = j;}
			if(count > 1) { arr[v] = 0; }
		}
		count = 0;
	}
	
	for(int i=0; n>i; i++)
	{
		if(arr[i] == 0)
		{
			for(int j=i; n>j; j++)
			{
				arr[j] = arr[j+1];
			}
		}
		if(arr[i] == 0){ count += 1; }
	}
	
	n -= count;
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
