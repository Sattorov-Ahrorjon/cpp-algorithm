#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

void converter(string s)
{
    reverse(s.begin(), s.end());
    cout << s  << "\n";
}

int main()
{
    int n;
    vector <string> d_m;
    cout << " n = ";
    cin >> n;
    string son;
    cout << " \n Vector elementlari\n";
    while(n>0)
    {
        cout << " Ism kiriting : ";
        cin >> son;
        d_m.push_back(son);
        n--;
    }
    for_each(d_m.begin(), d_m.end(), converter);

return 0;
}