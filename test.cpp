#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>

using namespace std;

int main()
{
    int h, a, b;
    cin >> a >> b >> h;

    int days = 1;
    days += ceil((double)(h - a) / (double)(a - b));

    cout << days << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()