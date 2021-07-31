#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

char _swap(char flag)
{
    if (flag == 'W')
        flag = 'B';
    else
        flag = 'W';
    return flag;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> map;

    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        map.push_back(input);
    }
    int _min = 999999;

    for (int y = 7; y < N; y++)
    {
        for (int x = 7; x < M; x++)
        {
            char flag = 'B';
            int cnt = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (map[y - 7 + i][x - 7 + j] != flag)
                    {
                        cnt++;
                    }
                    flag = _swap(flag);
                }
                flag = _swap(flag);
            }
            if (_min > cnt)
                _min = cnt;
            if (_min > 64 - cnt)
                _min = 64 - cnt;
        }
    }

    if (_min == 999999)
        _min = 0;
    cout << _min << endl;

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
// copy(&arr[0], &arr[0] + N, &arr_cpy[0]);