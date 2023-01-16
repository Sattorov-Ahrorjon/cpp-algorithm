#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int arr1_max = 0;
	int c, a1, b1, a2, b2;
	int arr2_min = 100;
	int n, m;
	cout << " M = "; cin >> m;
	cout << " N = "; cin >> n;
	int arr1[m][n], arr2[m][n];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			arr1[i][j] = rand() % 50;
			if (arr1[i][j] >= arr1_max)
			{
				arr1_max = arr1[i][j];
				a1 = i, b1 = j;
			}
			arr2[i][j] = rand() % 50 + 50;
			if (arr2[i][j] <= arr2_min)
			{
				arr2_min = arr2[i][j];
				a2 = i, b2 = j;
			}
		}
	}
	cout << " Arr1 elementlari \n";
	for(int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << arr1[i][j] << "  ";
		}
	}
	
	cout << "\n Arr2 elementlari \n";
	for(int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << arr2[i][j] << "  ";
		}
	}
	
	c = arr1[a1][b1] + arr2[a2][b2];
	arr1[a1][b1] = c - arr1[a1][b1];
	arr2[a2][b2] = c - arr1[a1][b1];
	
	cout << "\n\n Yangi \n\n";
	
		for(int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << arr1[i][j] << "  ";
		}
	}
	
	cout << "\n Arr2 elementlari \n";
	for(int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << arr2[i][j] << "  ";
		}
	}
	
	
	
}
