#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 1;
    n -= c;
    while (n > 0)
    {
        n -= c * 6;
        c++;
    }
    cout << c << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()