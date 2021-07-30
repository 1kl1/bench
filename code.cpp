#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int height;
    if (x1 != x2 && y1 != y2)
    {
        cout << x1 + x2 - x3 << " " << y1 + y2 - y3 << endl;
    }

    else if (x1 != x3 && y1 != y3)
    {
        cout << x1 + x3 - x2 << " " << y1 + y3 - y2 << endl;
    }

    else if (x2 != x3 && y2 != y3)
    {
        cout << x2 + x3 - x1 << " " << y2 + y3 - y1 << endl;
    }

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a