// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int tot = 0;
    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;
        bool isGroup = true;
        char befChar = word.at(0);
        bool arr[26] = {
            false,
        };
        arr[befChar - 97] = true;
        for (int j = 1; j < word.length(); j++)
        {
            if (befChar != word[j])
            {
                if (arr[word[j] - 97])
                {
                    isGroup = false;
                }
                arr[befChar - 97] = true;
            }
            befChar = word.at(j);
        }
        if (isGroup)
            tot++;
    }

    cout << tot << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a
