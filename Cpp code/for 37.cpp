#include <iostream>
using namespace std;
int main()
{
	int N, sum=0, con=1;
	cout << " N = "; cin >> N;
	for (int i=1; i<=N; i++)
	{
		con = 1;
		for(int j=1; j<=N; j++)
		{
			con = con * i;
		}
		cout << con << " ";
		sum = sum +con;
	}
	cout << endl << " Yig'indi = " << sum;
return 0;
}
