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
		arr[i] = v; v=0;
	}
	cout << endl;
	
	for(int i=n-1; i>=0; i--)
	{
		for(int j=i-1; j>=0; j--)
		{
			if(arr[i] == arr[j]){
				arr[j] = 0;
			}
		}
	}
	int j=0;
	
	while(true)
	{
		if(arr[j] == 0)
		{
			for(int i=j; n>i; i++)
			{
				arr[i] = arr[i+1];
			}
		}
		
		else{
			j+=1;
		}
		
		if(j == n){
			break;
		}
	}
	
	for(int i=0; n>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
