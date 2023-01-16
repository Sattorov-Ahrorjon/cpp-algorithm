#include <iostream>
#include <vector>
#include <string>
using namespace std;
string kupaytirish (string num1, string num2) // 26 35
{
    int len1 = num1.size(); // 2
    int len2 = num2.size(); // 2
    if(len1 == 0 || len2 == 0)
        return "0";
    vector<int> natija (len1 + len2, 0); // (0, 0, 0, 0)
    int i_n1 = 0;
    int i_n2 = 0;
    for(int i = len1 - 1; i >= 0; i--)
    {
        int dilda = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for(int j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + natija[i_n1 + i_n2] + dilda;
            dilda = sum / 10;
            natija[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if(dilda >0) // 2 > 0
        {
            natija[i_n1 + i_n2] += dilda;
        }
        i_n1 ++; // 0 + 1 = 1
    }
    int i = natija.size() - 1;
    while(i >= 0 && natija[i] == 0)
    {
        i--;
    }
    if( i == -1)
        return "0";
    string s = "";
    while(i >= 0)
        s += std::to_string(natija[i--]); // natija[i--] + '0'
    return s;
}
int main()
{
    string str1 = "123";
    string str2 = "4";
    cout << " Birinchi son = ";
    cin >> str1;
    cout << " Ikkinchi son = ";
    cin >> str2;
    if((str1.at(0) == '-' || str2.at(0) == '-') && (str1.at(0) != '-' || str2.at(0) != '-'))
    {
        cout << '-';
    }
    if(str1.at(0) == '-')
        str1 = str1.substr(1);
    if(str2.at(0) == '-')
        str2 = str2.substr(1);
    cout << kupaytirish(str1, str2) << endl;
    return 0;
}