#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0)
            break;

        int max_ = max(c, max(a, b));
        if (max_ == a)
        {
            if (a * a == b * b + c * c)
            {
                cout << "right" << endl;
            }
            else
            {
                cout << "wrong" << endl;
            }
        }
        else if (max_ == b)
        {
            if (b * b == a * a + c * c)
            {
                cout << "right" << endl;
            }
            else
            {
                cout << "wrong" << endl;
            }
        }
        else
        {
            if (c * c == b * b + a * a)
            {
                cout << "right" << endl;
            }
            else
            {
                cout << "wrong" << endl;
            }
        }
    }

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a