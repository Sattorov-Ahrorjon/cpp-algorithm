#include <iostream>
using namespace std;
int main()
{
int v=0;
string a;
cout << " a : ";
cin >> a;

if(a == "Otam")
{
	v=1;
	cout << " @@@   @@@@@   @@     @@    @@" << endl;
	cout << "@   @    @    @  @    @@    @@" << endl;
	cout << "@   @    @   @ @@ @   @ @  @ @" << endl;
	cout << " @@@     @  @      @  @  @@  @" << endl;
}
else if(a=="Onam")
{
	v=2;
	cout << "  @@@   @@   @     @@     @@    @@" << endl;
	cout << " @   @  @ @  @    @  @    @@    @@" << endl;
	cout << " @   @  @  @ @   @ @@ @   @ @  @ @" << endl;
	cout << "  @@@   @   @@  @      @  @  @@  @" << endl;

}
	cout << v;

return 0;
}
