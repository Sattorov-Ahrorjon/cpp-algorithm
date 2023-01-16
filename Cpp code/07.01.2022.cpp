#include <iostream>
using namespace std;
int main()
{
int v=0;
string a;
cout << " a : ";
cin >> a;

if(a == "Ota")
{
	v=1;
	cout << " @@@   @@@@@   @@     @@    @@" << endl;
	cout << "@   @    @    @  @    @@    @@" << endl;
	cout << "@   @    @   @ @@ @   @ @  @ @" << endl;
	cout << " @@@     @  @      @  @  @@  @" << endl;
}
else if(a=="Ona")
{
	v=2;
	cout << "  @@@   @@   @     @@     @@    @@" << endl;
	cout << " @   @  @ @  @    @  @    @@    @@" << endl;
	cout << " @   @  @  @ @   @ @@ @   @ @  @ @" << endl;
	cout << "  @@@   @   @@  @      @  @  @@  @" << endl;

}
else if(a=="Qirolicha")
{	cout << "  @@@   @   @   @   @@   @    @@@  " << endl;
	cout << " @   @  @   @   @   @ @  @   @     " << endl;
	cout << " @   @  @   @   @   @  @ @   @  @@ " << endl;
	cout << "  @@@@   @@@    @   @   @@    @@@@ " << endl;
	cout << "     @@                            " << endl;
}
else if(a=="Opa")
{
	cout << "   @@@@     @@@@      @@      @@      @@" << endl;
	cout << "  @    @   @    @    @  @     @@      @@" << endl;
	cout << "  @    @   @ @@@    @ @@ @    @ @    @ @" << endl;
	cout << "  @    @   @       @      @   @  @  @  @" << endl;
	cout << "   @@@@    @      @        @  @   @@   @" << endl;
}
	cout << v;
return 0;
}
