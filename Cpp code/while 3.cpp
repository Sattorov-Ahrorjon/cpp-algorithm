#include <iostream>
using namespace std;
int main()
{
	int N, K, v;
	cout << "N = "; cin >> N;
	cout << "K = "; cin >> K;
	while( N>=K )
	{
		N = N - K;
		v++;
	}
	cout << "Javob = " << v << endl;
	cout << "qoliq = " << N;
return 0;
}
