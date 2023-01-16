#include <iostream>
using namespace std;
int main()
{
	int n, v, a, b;
	cout << " n = "; cin >> n;
	int arr[n+2];
	
	for(int i=0; n>i; i++)
	{
		cout << " arr[" << i << "] = "; cin >> v;
		arr[i] = v;
	}
	int max=arr[0], min=arr[0];
	
	for(int i=0; n>i; i++)
	{
		if(arr[i] >= max){ max = arr[i]; a = i; }
		if(arr[i] <= min){ min = arr[i]; b = i; }
	}
	
	for(int i=n+1; i>=b; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[b] = 0;
	if(a>b) a+=1;
	
	for(int i=n+2; i>a; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[a+1] = 0;
	
	cout << " max = " << max << " " << a;
	cout << " min = " << min << endl;
	
	for(int i=0; n+2>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
