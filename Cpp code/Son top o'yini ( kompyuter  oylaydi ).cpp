#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int a, b, x, count = 0;
	cout << " \t BIROR SON KIRITING \n  MEN  SHU  SONDAN  KICHIK  O'YLAYMAN  VA  SIZ  UNI TOPASIZ !!! "; cin >> a;
	srand(time(0));
	x = a;
	b = 1 + ( rand() % a );
	cout << b;
//	cout << "  Qani  topingchi " << endl;
	cout << "  Men nechchini o'yladim : "; cin >> a;
	for(int i=0; i<=x; i++)
	{
		if( b > a)
		{
			cout << " \nMen o'ylagan son kattaroq ! ";
			cin >> a;
			count += 1;
		}
		else if( b < a )
		{
			cout << " \nMen o'ylagan son kichikroq ! ";
			cin >> a;
			count += 1;
		}
		else if( b == a )
		{
			cout << " \n \a URRA \nMen o'ylagan sonni topdingiz !!!\n ";
			cout << count << "  urinishda  topdingiz ";
			break;
		}
	}
	
return 0;
}
