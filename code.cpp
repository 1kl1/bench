#include <stdio.h>
#include <iostream>
#include <vector>
// #include <string>
// #include <cmath>

using namespace std;

#define first 1
#define second 2
#define third 3

int N;
int cnt = 0;
vector<int> mov[2];

void hanoi(int n, int from, int to)
{
    if (n == 1)
    {
        mov[0].push_back(from);
        mov[1].push_back(to);
        cnt++;
    }
    else
    {
        int other;
        for (int i = 1; i <= 3; i++)
        {
            if (from != i && to != i)
                other = i;
        }
        hanoi(n - 1, from, other);
        mov[0].push_back(from);
        mov[1].push_back(to);
        cnt++;
        hanoi(n - 1, other, to);
    }
    return;
}

int main()
{
    cin >> N;

    hanoi(N, first, third);
    printf("%d\n", cnt);

    for (int i = 0; i < mov[0].size(); i++)
    {
        printf("%d %d\n", mov[0][i], mov[1][i]);
    }

    return 0;
}

//cin.ignore(32767, '\n');
// 65-A, 97-a
// #include <iomanip>
