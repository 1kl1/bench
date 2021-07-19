// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string word;

    cin >> word;

    // 1 ABC 3
    // 2 DEF 6
    // 3 GHI 9
    // 4 JKL 12
    // 5 MNO 15
    // 6 PQRS 18 19 20 21

    int sum = 0;
    for (int i = 0; i < word.length(); i++)
    {
        char c = word.at(i);

        if (c >= 'S')
            c--;

        if (c >= 89)
            c--;

        c -= 62;
        c /= 3;
        sum += c + 2;
    }

    cout << sum << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
