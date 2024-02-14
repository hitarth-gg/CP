

#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int num;
        int ans;

        if (n == 1)
        {
            cout << 8 << endl;
            continue;
        }
        else if (n == 2)
            num = stoi(str);
        else
            num = stoi(str.substr(n - 3, 3));

        if (num % 8 == 0)
        {
            cout << str << endl;
            continue;
        }
        else
        {
            int rem = num % 8;
            string check1 = (num + rem + "");
            string check2 = (num + rem + "");
            if (check1[check1.size() - 2] == check2[check2.size() - 2])
                ans = num + rem;
            else
                ans = num - rem;

            string res = to_string(ans);
            if (str.size() > 2)
            {
                while (res.size() < 3)
                    res.insert(0, "0");
            }
            res = str.substr(0, n - 3) + res;
            cout << res << endl;
        }
    }

    return 0;
}
