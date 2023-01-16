#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	srand(time(0));
	for(int i=0; i<13;i++)
	cout << 1 + (rand()) % 8 << endl;
}
