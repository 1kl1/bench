#include <stdio.h>
#include <iostream>
// #include <string>
// #include <vector>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;

        int ho = ceil(N / (H * 1.0));
        int lvl = N % H == 0 ? H : N % H;
        printf("%d%02d\n", lvl, ho);
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()