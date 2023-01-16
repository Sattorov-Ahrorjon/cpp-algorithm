#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cout << " n = "; cin >> n;
	cout << " m = "; cin >> m;
	int A[n][m];
	for(int i=0; n>i; i++)
	{
		for(int j=0; m>j; j++)
		{
			cout << " A[" << i << "][" << j << "] = "; cin >> A[i][j];
		}
	}
	cout << endl;
	int max = A[0][0], min = max;
	
	for(int i=0; n>i; i++)
	{
		for(int j=0; m>j; j++)
		{
			cout << " | " << A[i][j];
			if(A[i][j] >= max) max = A[i][j];
			if(A[i][j] <= min) min = A[i][j];
		}
		cout << " | " << endl << endl;
	}
	cout << " Max = " << max << endl;
	cout << " Min = " << min << endl;
return 0;
}
