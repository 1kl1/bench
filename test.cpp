#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int n = 0;
    int c = 1;
    while (n + c < x)
    {
        n += c;
        c++;
    }
    int k = x - n;
    if (c % 2 == 0)
    {
        cout << k << "/" << 1 + (c - k) << endl;
    }
    else
    {
        cout << 1 + (c - k) << "/" << k << endl;
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()