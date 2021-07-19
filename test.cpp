// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string word;

    cin >> word;
    // abcdc=e

    int tot = word.length();

    string pattern[8] = {
        "c=",
        "c-",
        "dz=",
        "d-",
        "lj",
        "nj",
        "s=",
        "z="};

    for (int i = 0; i < 8; i++)
    {

        for (int j = 0; j <= (int)(word.length() - pattern[i].length()); j++)
        {
            if (word.substr(j, pattern[i].length()).compare(pattern[i]) == 0)
                tot--;
        }
    }

    cout << tot << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
