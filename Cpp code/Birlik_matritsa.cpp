#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n, m;
    cin >> n;
    cin >> m;
    int ar[n][m];

    for (int i = 0; i< n; i++) {
        for(int j = 0; j < m; j++) {
            if(j == i)
            {
                ar[i][j] = 1;
            }
            else ar[i][j] = 0;
        }
    }

    for (int i = 0; i< n; i++) {
        for(int j = 0; j < m; j++) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << ar[n][m];
}
