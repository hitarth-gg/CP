#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    string str;
    cin >> str;
    string res;
    for(int i =0; i<str.size(); i=i+res.size()+1)
    {
        res.push_back(str[i]);
    }
    cout << res << endl;
    return 0;
}
