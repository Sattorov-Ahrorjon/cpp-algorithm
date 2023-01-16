#include <iostream>
using namespace std;
int main()
{
	int n, arr[10], a, sana;
	cout << "{10>=n} n - "; cin >> n;
	cout << " Massivga element bering\n";
	for(int i=0; n>i; i++)
	{
		cout << "a" << i+1 << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		if(arr[i] % 2 == 1){
			cout << arr[i] << " ";
			sana++;
		}
	}
	cout << "\ntoq sonlar " << sana << " ta";
return 0;
}
