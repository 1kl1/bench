#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isEnd(int i)
{
    bool _end[3] = {false, false, false};
    int cnt = 0;
    int max_cnt = -1;
    while (i > 0)
    {
        if (i % 10 == 6)
        {
            cnt++;
            if (max_cnt < cnt)
                max_cnt = cnt;
        }
        else
        {
            cnt = 0;
        }
        i /= 10;
    }
    if (max_cnt >= 3)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (n >= 1)
    {
        i++;
        if (isEnd(i))
            n--;
    }
    cout << i << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
// copy(&arr[0], &arr[0] + N, &arr_cpy[0]);