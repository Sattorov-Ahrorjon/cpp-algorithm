#include <iostream>
using namespace std;

int main() {
	int n,a;
	cout << "n = ";cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; ++i) {
		cout << i + 1 << ": ";cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(arr[i] < arr[j]) {
				a = arr[i];
				arr[i] = arr[j];
				arr[j]=a;
			}
		}
	}
	
	for(int i = 0; i < n; ++i) {
		cout <<arr[i] << " ";
	}
}
