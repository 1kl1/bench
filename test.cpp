#include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
                printf("-1\n");
            else
                printf("0\n");

            continue;
        }

        double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        int k = r1 + r2;
        if (dist > k)
            cout << "0";
        else if (dist == k)
            cout << "1";
        else
        {
            if (r1 > dist || r2 > dist)
            {
                int bigOne = r1 > r2 ? r1 : r2;
                int smallOne = r1 > r2 ? r2 : r1;
                if (bigOne == smallOne + dist)
                    cout << "1";
                else if (bigOne > smallOne + dist)
                    cout << "0";
                else
                    cout << "2";
            }
            else
            {
                cout << "2";
            }
        }

        cout << endl;
    }
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a