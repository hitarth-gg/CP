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
        string str;
        cin >> str;
        string hash;
        cin >> hash;

        sort(str.begin(), str.end());

        int w = str.size();
        int flag = 0;

        if (str.size() > hash.size())
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int i = 0; i <= hash.size() - w; i++)
            {
                string check = hash.substr(i, w);
                sort(check.begin(), check.end());
                if (str == check)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
