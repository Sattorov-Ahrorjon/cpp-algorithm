#include <iostream>
using namespace std;
int main()
{
	int a, arr[10] = {9,5,4,1,2,8,7,3,10,6};
	for(int i=0; 10>i; i++)
	{
		for(int j=9; j>=i; j--)
		{
			if(arr[j-1] > arr[j])
			{
				a = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = a;
			}
		}
	}
	for(int i=0; 10>i; i++)
	{
		cout << " " << arr[i];
	}
return 0;
}
