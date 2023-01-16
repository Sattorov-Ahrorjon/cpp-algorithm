#include <iostream>
using namespace std;

int Calc(int a, int b, int op)
{
	if(op>4 or 0>=op ) return 0;
	else if(op==1) return a+b;
	else if(op==2) return a-b;
	else if(op==3) return a*b;
	else if(op==4) return a/b;
}

int main()
{
	int A, B, op=0;
	cout << " 1-qo'shish,  2-ayirish,  3-ko'paytirish,  4-bo'lish " << endl;
	cin >> op;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " Natija = " << Calc(A, B, op);
return 0;
}
