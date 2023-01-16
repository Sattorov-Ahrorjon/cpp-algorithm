#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "1 kg konfet narxini kiriting : " ; cin >> a;
	for (int i=1; i<=10; i++)
	{
		cout << i << " kgning narxi  " << i * a << endl;
	}
}
