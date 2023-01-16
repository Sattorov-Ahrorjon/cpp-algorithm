#include <iostream>
using namespace std;
int main()
{
	int n, a, j=0, count=0;
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
		if(arr[i] > arr[i+1])
		{
			cout << " " << arr[i];
			j++;
			count++;
		}
	}
	
	cout << endl << count << " taa";
return 0;
}
