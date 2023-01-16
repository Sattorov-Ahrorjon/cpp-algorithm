#include <iostream>
#include <cmath>
using namespace std;
int EKUB(int a, int b)
{
	int i=1, e, c=abs(a+b)/2;
	while(c!=i){
		if(a%i==0 and b%i==0){
			e = i;
			i++;
		}
		else {
			i++;
		}
	}
	return e;
}

int main(){
	int a, b, c, d;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	cout << " EKUB(a, b) = " << EKUB(a, b) << endl;
	cout << " EKUB(a, c) = " << EKUB(a, c) << endl;
	cout << " EKUB(a, d) = " << EKUB(a, d) << endl;
return 0;
}
