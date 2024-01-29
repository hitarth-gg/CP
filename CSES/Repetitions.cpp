#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // cout << str;
    int ans =1, count =1;
    for (int i=1; i<str.size(); i++)
    {
        if(str[i-1] == str[i])
        {
            count++;
            // if(count > ans)
            // {
            //     ans = count;
            // }
            ans = max(ans, count);
        }
        else
        {
            count = 1;
        }
    }
    cout << ans;
    return 0;
}
