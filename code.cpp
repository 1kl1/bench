#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int N;
char map[2188][2188];

void star(int n, int x, int y, bool flag)
{
    if (n == 1)
    {
        if (flag)
            map[x][y] = '*';
        else
            map[x][y] = ' ';
    }
    else
    {
        x *= 3;
        y *= 3;
        star(n / 3, x, y, flag && true);
        star(n / 3, x + 1, y, flag && true);
        star(n / 3, x + 2, y, flag && true);

        star(n / 3, x, y + 1, flag && true);
        star(n / 3, x + 1, y + 1, false);
        star(n / 3, x + 2, y + 1, flag && true);

        star(n / 3, x, y + 2, flag && true);
        star(n / 3, x + 1, y + 2, flag && true);
        star(n / 3, x + 2, y + 2, flag && true);
    }
    return;
}

int main()
{
    cin >> N;
    star(N, 0, 0, true);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c", map[i][j]);
        }
        cout << endl;
    }
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
