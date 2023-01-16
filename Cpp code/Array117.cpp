#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " n = "; cin >> n;
	int A[n*2], a = n + 1;
	
	for(int i=0; i<n; i++)
	{
		cout << i+1 << " - element = "; cin >> A[i];
	}
	
	for(int i=0; i<n; i++)
	{
		int count = 0;
		for(int j=i+1; j<n; j++)
		{
			if(A[i] == A[j])
			{
				count++;
				cout << "\n count = " << count;
			}
		}
		if(count >= 1)
		{
			int k=0;
			while(n > k)
			{
				for(int j=a; i<j; j--)
				{
					A[j] = A[j-1];
				}
				k++;
			}
			a++;
			A[i] = 0;
		}
	}
	cout << endl;

	for(int i=0; i<a-1; i++)
	{
		cout << "  " << A[i];
	}
}
