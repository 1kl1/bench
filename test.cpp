// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    if (str.length() == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    bool isEnter = false;

    int n = str.find_last_not_of(' ');
    str = n == string::npos ? str : str.substr(0, n + 1);
    n = str.find_first_not_of(' ');
    str = n == string::npos ? str : str.substr(n, str.length());

    bool start = str.front() != ' ';

    int c = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ')
        {
            if (start)
            {
                c++;
                isEnter = true;
            }
        }
        else
        {
            if (i == 0)
                isEnter = true;
        }
    }

    cout << (isEnter ? c + 1 : c) << endl;

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a