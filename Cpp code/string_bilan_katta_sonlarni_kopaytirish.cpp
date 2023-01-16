#include <iostream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 string bulish (string son, __int64 a)
 {
     string natija = "";
     int index = 0;
     __int64 b = (son[index] - '0'); //45*10+6=456
     while(b < a)
     {
         b = b * 10 + (son[++index] - '0');
     }
     while (son.size() > index)
     {
        int sum = b / a;
        natija += (sum + '0');
        b = b % a;
        b = b * 10 + (son[++index] - '0');
     }
     if(natija.length() == 0)
     {
        return "0";

     }
     return natija;   
 }
 int main()
 {
     string a;
     long long son;
hl:
    cout << " a = ";
    cin >> a;
    cout << " son = ";
    cin >> son;
    cout << " Bo'linma = " << bulish(a, son) << endl;
    goto hl;
    return 0;
 }