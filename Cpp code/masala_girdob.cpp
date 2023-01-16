#include <iostream>
using namespace std;
int main()
{
	int n, count = 1;
	cout << " N = "; cin >> n;
	int arr[n][n];
	for(int i=0; n>i; i++)
	{
		for(int j=0; n>j; j++)
		{
			arr[i][j] = count;
			count++;
		}
	}
	
	for(int i=0; n>i; i++)
	{
		for(int j=0; n>j; j++)
		{
			cout << arr[i][j] << "  ";
		}
	}
	
	
}
