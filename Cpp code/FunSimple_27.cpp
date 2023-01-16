#include <iostream>
using namespace std;

float IsPowerN(float a, float n)
{
	static int count;
	while(a>=n)
	{
		a = a/n;
	}
	if(a == 1) count++;
	return count;
}

int main()
{
	float a1, a2, a3, a4, a5, N;
	cout << "  K  sonlarini  kiriting {probel bilan 5 ta} : "; 
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << " N = "; cin >> N;
	IsPowerN(a1, N);
	IsPowerN(a2, N);
	IsPowerN(a3, N);
	IsPowerN(a4, N);
	cout << "  " << IsPowerN(a5, N) << " tasi ";
return 0;
}
