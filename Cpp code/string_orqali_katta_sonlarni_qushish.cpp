#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string summa(string a, string b)
{
    if(a.length() != b.length())
    {
        if(a.length() > b.length())
        {
            for(int i=b.length(); i<a.length(); i++)
            b = b + '0';
        }
        else
        {
            for(int i=a.length(); i<b.length(); i++)
            a = a + '0';
        }
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(),b.end());
    int n = a.length();
    string sum="";
    int dilda=0;
    for(int i=0; i<n; i++)
    {
        int yigindi = (a[i]-'0')+(b[i]-'0')+dilda;
        dilda = yigindi / 10;
        sum.push_back((yigindi%10 + '0'));
    }
    if(dilda > 0)
    {
        sum.push_back((dilda + '0'));
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

int main()
{
    string son1, son2;
    cout << " son1 = "; cin >> son1;
    cout << " son2 = "; cin >> son2;
    cout << son1 << " + " << son2 << " = " << summa(son1, son2) << endl;
    return 0;
}