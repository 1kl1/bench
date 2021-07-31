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

    vector<int> weight;
    vector<int> height;
    for (int i = 0; i < N; i++)
    {
        int w, h;
        cin >> w >> h;
        weight.push_back(w);
        height.push_back(h);
    }

    for (int i = 0; i < N; i++)
    {
        int cnt = 1;
        for (int j = 0; j < N; j++)
        {
            if (weight[i] < weight[j] && height[i] < height[j])
                cnt++;
        }
        cout << cnt;
        if (i != N - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
// copy(&arr[0], &arr[0] + N, &arr_cpy[0]);