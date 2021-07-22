#include <stdio.h>
#include <iostream>
// #include <string>
#include <vector>
#include <cmath>

using namespace std;

void che(int m, int n)
{
    bool arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = false;

    arr[0] = arr[1] = true;
    int sqr = sqrt(n);
    for (int i = 2; i <= sqr; i++)
    {
        if (arr[i])
            continue;
        for (int j = i * 2; j <= n; j += i)
            arr[j] = true;
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i] == false)
            printf("%d\n", i);
    }
}

int main()
{

    int M, N;
    cin >> M >> N;

    che(M, N);

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()