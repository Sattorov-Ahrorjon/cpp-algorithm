#include <iostream>
using namespace std;

void Frac1(int a, int b)
{
	int c=(a+b)/2, i=1, e;
	while(c!=i){
		if(a%i==0 and b%i==0){
			e=i;
			i++;
		}
		else{
			i++;
		}
	}
	cout << a << "/" << b << " = ";
	cout << a/e << "/" << b/e << endl;
}

int main(){
	int a, b, c, d;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	cout << " d = "; cin >> d;
	Frac1(a, b);
	Frac1(a, c);
	Frac1(a, d);
return 0;
}
