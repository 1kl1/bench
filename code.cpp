#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
// #include <cmath>

using namespace std;

bool isPrime(int k)
{
    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int main()
{
    int N;
    int c = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        if (isPrime(k))
            c++;
    }
    cout << c << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a