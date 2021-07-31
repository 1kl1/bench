#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int nums[100];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }

    int est = 999999;
    int clst = -1;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (nums[i] + nums[j] <= M)
            {
                for (int k = j + 1; k < N; k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum <= M && M - sum < est)
                    {
                        clst = sum;
                        est = M - sum;
                    }
                }
            }
        }
    }
    cout << clst << endl;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
// copy(&arr[0], &arr[0] + N, &arr_cpy[0]);