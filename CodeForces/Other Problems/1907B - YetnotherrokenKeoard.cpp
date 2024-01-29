#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        // cout << str;
        vector<int> upper;
        vector<int> lower;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'b')
                lower.push_back(i);
            else if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'B')
                upper.push_back(i);

            if (str[i] == 'b')
            {
                str[i] = '0';
                if (!lower.empty())
                {
                    str[lower.back()] = '0';
                    lower.pop_back();
                }
            }
            if (str[i] == 'B')
            {
                str[i] = '0';
                if (!upper.empty())
                {
                    str[upper.back()] = '0';
                    upper.pop_back();
                }
            }
        }
        for (int i = 0; i < str.size(); i++)
            if (str[i] != '0')
                cout << str[i];
        cout << endl;
    }

    return 0;
}
