#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N;

    cin >> N;
    for (int i = 1; i < N; i++)
    {
        int sum = 0;
        int tmp = i;
        while (tmp > 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (N == sum + i)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
// copy(&arr[0], &arr[0] + N, &arr_cpy[0]);