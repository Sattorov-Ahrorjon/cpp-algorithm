#include <iostream>
using namespace std;
int A = 25;
int main()
{
	int A = 30;
	cout << ::A << endl; // global chaqirish
	cout << A << endl; // lokal chaqirish
}
