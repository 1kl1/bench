#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int N;
int pattern[3][2] = {{1, 0}, {1, 1}, {1, -1}};
int sum(int line[15])
{
    int res = 0;
    for (int i = 0; i < N; i++)
        res += line[i];
    return res;
}

// vector<vector<int> > mark(int y, int x, vector<vector<int> > map)
// {

//     for (int i = 0; i < 3; i++)
//     {
//         int cursor[2] = {y, x};
//         map[cursor[0]][cursor[1]] = 8;
//         cursor[0] += pattern[i][0];
//         cursor[1] += pattern[i][1];
//         while (cursor[1] >= 0 && cursor[1] < N && cursor[0] < N)
//         {
//             map[cursor[0]][cursor[1]] = 0;
//             cursor[0] += pattern[i][0];
//             cursor[1] += pattern[i][1];
//         }
//     }
//     return map;
// }

int NQueen(int idx, int map[15][15])
{
    if (idx == N - 1)
        return sum(map[idx]);

    if (sum(map[idx]) == 0)
        return 0;

    int num = 0;

    int tmp = N;
    if (idx == 0)
    {
        tmp /= 2;
    }
    for (int i = 0; i < tmp; i++)
    {
        if (map[idx][i] == 1)
        {
            int map_cpy[15][15];
            copy(&map[0][0], &map[0][0] + 225, &map_cpy[0][0]);

            for (int k = 0; k < 3; k++)
            {
                int cursor[2] = {idx, i};
                map_cpy[cursor[0]][cursor[1]] = 8;
                cursor[0] += pattern[k][0];
                cursor[1] += pattern[k][1];
                while (cursor[1] >= 0 && cursor[1] < N && cursor[0] < N)
                {
                    map_cpy[cursor[0]][cursor[1]] = 0;
                    cursor[0] += pattern[k][0];
                    cursor[1] += pattern[k][1];
                }
            }

            // for (int m = 0; m < N; m++)
            // {
            //     for (int n = 0; n < N; n++)
            //     {
            //         printf("%d ", map_cpy[m][n]);
            //     }
            //     printf("\n");
            // }
            // cout << endl;

            num += NQueen(idx + 1, map_cpy);
        }
    }
    if (idx == 0)
    {
        num *= 2;

        if (N % 2 == 1)
        {
            if (map[idx][tmp] == 1)
            {
                int map_cpy[15][15];
                copy(&map[0][0], &map[0][0] + 225, &map_cpy[0][0]);

                for (int k = 0; k < 3; k++)
                {
                    int cursor[2] = {idx, tmp};
                    map_cpy[cursor[0]][cursor[1]] = 8;
                    cursor[0] += pattern[k][0];
                    cursor[1] += pattern[k][1];
                    while (cursor[1] >= 0 && cursor[1] < N && cursor[0] < N)
                    {
                        map_cpy[cursor[0]][cursor[1]] = 0;
                        cursor[0] += pattern[k][0];
                        cursor[1] += pattern[k][1];
                    }
                }

                // for (int m = 0; m < N; m++)
                // {
                //     for (int n = 0; n < N; n++)
                //     {
                //         printf("%d ", map_cpy[m][n]);
                //     }
                //     printf("\n");
                // }
                // cout << endl;

                num += NQueen(idx + 1, map_cpy);
            }
        }
    }
    return num;
}

int main()
{
    cin >> N;
    int map[15][15] = {
        0,
    };
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            map[i][j] = 1;

    cout << NQueen(0, map) << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>

// if (idx == 0)
//     {
//         if (N % 2 == 0)
//         {
//             for (int i = 0; i < N / 2; i++)
//             {
//                 if (map[idx][i] == 1)
//                 {
//                     num += NQueen(idx + 1, mark(idx, i, map));
//                 }
//             }
//             num *= 2;
//         }
//         else
//         {
//             cout << N / 2 << endl;
//             for (int i = 0; i < N / 2; i++)
//             {
//                 if (map[idx][i] == 1)
//                 {
//                     num += NQueen(idx + 1, mark(idx, i, map));
//                 }
//             }

//             num *= 2;
//             if (map[idx][N / 2] == 1)
//             {
//                 num += NQueen(idx + 1, mark(idx, N / 2, map));
//             }
//         }
//     }