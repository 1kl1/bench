#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>

using namespace std;

int floor(int x, int y)
{
    if (x == 1)
    {
        return 1;
    }
    if (y == 0)
    {
        return x;
    }
    return floor(x - 1, y) + floor(x, y - 1);
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int k, n;
        cin >> k;
        cin >> n;
        printf("%d\n", floor(n, k));
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()