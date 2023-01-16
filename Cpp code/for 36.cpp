#include <iostream>
using namespace std;
int main()
{
	int N, K, con=1;
	cout << " N = "; cin >> N;
	cout << " K = "; cin >> K;
	for(int i=1; i<=N; i++)
	{
		con = 1;
		for(int j=1; j<=K; j++)
		{
			con = con * i;
		}
		cout << con << " ";
	}
return 0;
}
