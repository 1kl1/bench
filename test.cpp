// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int arr[32] = {
        0,
    };
    int max = -1;
    char maxChar;
    for (int i = 0; i < str.length(); i++)
    {
        int seq = (int)str[i] - 65;
        if (seq >= 32)
            seq -= 32;

        arr[seq]++;
        if (max < arr[seq])
        {
            maxChar = (char)(seq + 65);
            max = arr[seq];
        }
        else if (max == arr[seq])
        {
            maxChar = '?';
        }
    }
    cout << maxChar << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a