#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void converter(string s)
{
    string a = s;
    reverse(s.begin(), s.end());
    if(a == s)
    cout << s << "  ";
}

int main()
{
    int n;
    vector <string> d_m;
    cout << " n = ";
    cin >> n;
    string soz;
    cout << " \n Vector elementlari\n";
    while(n>0)
    {
        cout << " Ism kiriting : ";
        cin >> soz;
        d_m.push_back(soz);
        n--;
    }
    for_each(d_m.begin(), d_m.end(), converter);

return 0;
}