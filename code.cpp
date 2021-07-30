#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int main()
{
    int x, y, w, h;

    cin >> x >> y >> w >> h;

    int l, t, r, b;
    l = x;
    r = w - x;
    t = h - y;
    b = y;

    int m = min(min(l, r), min(t, b));
    cout << m << endl;

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a