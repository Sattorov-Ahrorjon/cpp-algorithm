#include <iostream>
using namespace std;
int main(){
	int max, min, n, number;
	cout << "Raqamlar sonini kiriting : " ; cin >> n;
	cout << " 1- son : " ; cin >> number;
	max = number;
	min = number;
	
	for (int i=1; i<n; i++)
	{
		cout << " " << i+1 << " -son : " ; cin >> number ;
		if(max < number)
		max = number;
		if(min > number)
		min = number;
	}
	
	cout << " Max : " << max << endl;
	cout << " Min : " << min << endl;
	return 0;
}
