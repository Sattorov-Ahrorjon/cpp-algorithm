#include <iostream>
using namespace std;
int main()
{
	int n, a, v=1, t=0;
	cout << " n = "; cin >> n;
	int arr[n];
	for(int i=0; n>i; i++)
	{
		cout << " a" << i << " = "; cin >> a;
		arr[i] = a;
	}
	if( arr[0]%2==0){
		for(int i=0; n>i; i++)
		{
			if(arr[i]%2==t){
				if(t==0) t=1;
				else t=0;
			}
			else {
				cout << "Xatolik : " << arr[i];
				break;
			}
		}
	}
	else {
		for(int i=0; n>i; i++)
		{
			if(arr[i]%2==v){
				if(v==1) v=0;
				else v=1;
			}
			else{
				cout << "Xatolik : " << arr[i];
				break;
			}
		}
	}
return 0;
}
