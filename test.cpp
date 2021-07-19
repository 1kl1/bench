// #include <stdio.h>
#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main()
{
    string a, b;
    string c, d = "";
    cin >> a >> b;
    c.push_back(a[2]);
    c.push_back(a[1]);
    c.push_back(a[0]);
    d.push_back(b[2]);
    d.push_back(b[1]);
    d.push_back(b[0]);
    int i = stoi(c);
    int j = stoi(d);

    cout << (i < j ? j : i) << endl;
    // int n1 = (int)

    return 0;
}

//cin >> var
//cin.ignore(32767, '\n');
// 65-A, 97-a