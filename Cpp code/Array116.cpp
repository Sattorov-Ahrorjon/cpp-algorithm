#include <iostream>
using namespace std;
int main()
{
	int n, v;
	cout << " n = "; cin >> n;
	int A[n], B[n], C[n];
	for(int i=0; i<n; i++)
	{
		cout << " A[" << i << "] = "; cin >> A[i];
	}
	
	for(int i=0; i<n; i++)
	{
		v=0;
		for(int j=0; j<n; j++)
		{
			if(A[i] == A[j]) v++;
		}
		B[i] = v;
		C[i] = A[i];
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(C[i] == C[j]) C[j] = 0;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(C[i] != 0) cout << "\n C = " << C[i] << "   B = " << B[i];
	}
return 0;
}
