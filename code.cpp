#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    double pi = M_PI;

    cin >> r;
    cout << setprecision(16) << r * r * pi << endl;
    cout << r * r * 2 << endl;

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a