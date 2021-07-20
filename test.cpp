// #include <stdio.h>
#include <iostream>
// #include <string>
#include <vector>
// #include <cmath>

using namespace std;

vector<int> primeList;

bool isPrime(int n)
{
    if (n % 2 == 0)
        return false;
    for (int i = 0; i < primeList.size(); i++)
    {
        if (n < primeList.at(i))
            return false;
        else if (n == primeList.at(i))
            return true;
    }
    return false;
}

int main()
{
    int N;
    cin >> N;

    bool arr[10000];
    for (int i = 0; i < 10000; i++)
        arr[i] = false;

    for (int i = 2; i < 10000; i++)
    {
        if (arr[i])
            continue;
        primeList.push_back(i);
        if (i <= 100)
            for (int j = i * 2; j < 10000; j += i)
                arr[j] = true;
    }

    for (int idx = 0; idx < N; idx++)
    {
        int n;
        cin >> n;
        int end;
        for (int i = 0;; i++)
        {
            if (primeList[i] > n)
            {
                end = i;
                break;
            }
        }
        int half = n >> 1;
        bool flag = false;
        for (int i = 0; i < end; i++)
        {
            if (half == primeList[i])
            {
                flag = true;
                cout << half << " " << half << endl;
                break;
            }
        }
        if (flag)
            continue;

        int a = half - 1;
        int b = half + 1;
        while (a >= 2)
        {
            if (isPrime(a) && isPrime(b))
            {
                cout << a << " " << b << endl;
                break;
            }
            a--;
            b++;
        }
    }

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
// double sqrt()