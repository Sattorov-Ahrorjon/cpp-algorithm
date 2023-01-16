#include <iostream>
using namespace std;
int main()
{
	int son;
	cout << " Son : "; cin >> son;
	string probel = " ";
	for (int i=1; i<=son; i++)
	{
		int probel_son = son - i;
		while(probel_son != 0)
		{
			// Probel qo'yish uchun
			cout << probel;
			probel_son--;
		}
		
		int count=0, j=i;
		while(count != i)
		{
			cout << j;
			j++;
			count++;
		}
		
		int k=j-2;
		count=0;
		while(count != i-1)
		{
			cout << k;
			k--;
			count++;
		}
		cout << endl;
	}
return 0;
}
