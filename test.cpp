#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int s;
        cin >> s;
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            for (int k = 0; k < s; k++)
                cout << str.at(j);
        cout << endl;
    }

    return 0;
}

//cin.ignore(32767, '\n');