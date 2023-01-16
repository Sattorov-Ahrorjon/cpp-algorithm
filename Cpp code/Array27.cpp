#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	cout << endl;
	for(int i=0; n>i; i++)
	{
		if(arr[i]*arr[i+1] > 0){
			cout << "Xatolik : " << arr[i+1];
			break;
		}
	}
return 0;
}
