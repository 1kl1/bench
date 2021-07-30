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
    int M, N;
    int c = 0;
    int min = 9999999;

    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        if (isPrime(i))
        {
            c += i;
            if (min > i)
                min = i;
        }
    }
    if (c == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << c << endl
         << min << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a