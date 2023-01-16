#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int x1, x2, y1, y2;
    label:
    cout << "Koordinatalarni kiriting: " << endl;
    cout << "Dastlabki koordinata :" << endl ;
    cout << "x1 =";
    cin >> x1;

    cout << "y1 =";
    cin >> y1;

    cout << "Borish kerak bo'lgan koordinata: " << endl;
    cout << "x2 =";
    cin >> x2;

    cout << "y2 =";
    cin >> y2;

    if (x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8)
    {
        cout << endl;
        cout << "Iltimos 8 dan kichik koordinatalarni kiriting !" << endl << endl;
        goto label;
    }

    if (abs(x1 - x2) == 1 || abs(y1 - y2) == 1)
    {
        cout << "Yura oladi !!!" << endl;
    }

    else
        cout << "Yura olmaydi" << endl;

    main();
}
