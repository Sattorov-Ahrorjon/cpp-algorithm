#include <iostream>
using namespace std;
int main()
{
	int n, v, count=0, a, b;
	cout << " n = "; cin >> n;
	int arr[n];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=0; n>j ; j++)
		{
			if(i == j) continue;
			if(arr[i] == arr[j]) { count +=1; a=i; b=j;}
		}
		if(count == 1) { arr[a] = 0; arr[b] = 0;}
		count = 0;
	}

	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
