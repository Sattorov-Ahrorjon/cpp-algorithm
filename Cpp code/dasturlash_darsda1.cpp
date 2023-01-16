#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    vector <string> d_m;
    cout << " n = ";
    cin >> n;
    int son;
    cout << " \n Vector elementlari\n";
    while(n>0)
    {
        son = rand()%90+10;
        cout << son << "  ";
        d_m.push_back(son);
        n--;
    }
    if(all_of(d_m.begin(), d_m.end(),[](int x) {return x%2 == 0;}))
    {
        cout << "\nBarcha elementlari juft\n";
    }
    else
    {
        cout << "\n Barcha elementlari juft va toq\n";
    }
return 0;
}