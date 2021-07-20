// #include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int idx = 0; idx < N; idx++)
    {
        int x, y;
        cin >> x >> y;
        int dist = y - x;
        if (dist <= 4)
        {
            switch (dist)
            {
            case 1:
                cout << 1 << endl;
                break;
            case 2:
                cout << 2 << endl;
                break;
            case 3:
                cout << 3 << endl;
                break;
            case 4:
                cout << 3 << endl;
                break;
            }
            continue;
        }
        int n = (int)sqrt(dist);
        // cout << n << endl;
        if (n * n == dist)
        {
            cout << n * 2 - 1 << endl;
        }
        else if (n * n + n < dist)
        {
            cout << n + n + 1 << endl;
        }
        else
        {
            cout << n + n << endl;
        }
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
