#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream yozish;
	yozish.open("namuna.txt");
	yozish << "Men tezroq va yaxshiroq o'rganishim kerak" << endl;
	yozish << "O'rganish esa Juda oson !!! "<< endl;
	yozish.close();
return 0;
}
