#include <iostream>
using namespace std;
int main()
{
	int N, con=1, sum=0;
	cout << " N = "; cin >> N;
	int n=N;
	for(int i=1; i<=N; i++)
	{
		con = 1;
		for(int j=1; j<=n; j++)
		{
			con = con * i;
		}
		n--;
		cout << con << " ";
		sum = sum +con;
	}
	cout << endl << " Yig'indi = " << sum;
return 0;
}
