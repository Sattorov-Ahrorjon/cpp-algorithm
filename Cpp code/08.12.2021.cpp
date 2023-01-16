// Berilgan sonni ikkilangan qiymatigacha bo'lgan tup sonlarni o'zaro para bo'lganlarini chiqarish.
#include <iostream>
using namespace std;
int is_simple(int k) {
	for(int i = 2; i < k; i++) {
		if (k % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int a;
	int *arr, v = 0;
	cout <<"a = "; cin >> a;
	arr = new int[a];
	for (int i = a;i < 2*a; i++)
	{
		if(is_simple(i)){
			arr[v] = i;
			v++;
		}
	}
	cout << endl;
	
	for (int i=0; i<v; i++){
		if(arr[(i+1) % v] - arr[i] == 2)
			cout << arr[i] << " " << arr[i+1] << "    ";
			
	}	
	delete[] arr;
	return 0;
}
