#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>

using namespace std;

int fibo(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int N;
    cin >> N;
    cout << fibo(N) << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
