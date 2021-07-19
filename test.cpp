// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b >= c)
    {
        cout << "-1" << endl;
        return 0;
    }
    else
    {
        int bep = (int)(a / (c - b));
        cout << (bep + 1) << endl;
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
