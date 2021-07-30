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

    cin >> N;

    if (N == 1)
        return 0;

    for (int i = 2; i <= N; i++)
    {
        while (N % i == 0 && isPrime(i))
        {
            cout << i << endl;
            N /= i;
        }
    }
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a