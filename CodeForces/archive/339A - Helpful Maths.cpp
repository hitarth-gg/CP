#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;
    sort(str.begin(), str.end());
    for (int i =0; i<str.size(); i++)
    {
        if (str[i] != '+')
        {
            cout << str[i];
            if (i==str.size()-1)
                break;
            cout << '+';
        }
    }
    return 0;
}
