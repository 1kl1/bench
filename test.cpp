// #include <stdio.h>
#include <iostream>
// #include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> che(int n)
{
    vector<int> primeList;
    bool arr[2 * n + 1];
    for (int i = 0; i < 2 * n; i++)
        arr[i] = false;
    arr[0] = arr[1] = true;

    for (int i = 2; i <= 2 * n; i++)
    {
        if (arr[i])
            continue;
        if (i > n)
            primeList.push_back(i);
        for (int j = i * 2; j <= 2 * n; j += i)
            arr[j] = true;
    }

    return primeList;
}

int main()
{
    while (true)
    {
        int N;
        cin >> N;
        if (N == 0)
            break;

        vector<int> prime;
        prime = che(N);
        cout << prime.size() << endl;
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()