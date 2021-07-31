#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int fac(int n)
{
    if (n <= 1)
        return 1;
    return fac(n - 1) * n;
}

int main()
{
    int N;
    cin >> N;
    cout << fac(N) << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a