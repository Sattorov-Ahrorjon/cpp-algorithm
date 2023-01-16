#include <iostream>
using namespace std;
void func();
int main()
{
	func();	
}

void func()
{
	 double a, b=1, c=1, x;
    cout << " a =  " ; cin >> a;
    while(a!=0)
    {
        if( a/b >= 10)
        {
            b=b*10;
            c=c+1;
        }
        else{
//            cout << c << "- ta xonaga ega " << endl;
            a=0;
        }

    }
    x=c;
    cout << x;
}
