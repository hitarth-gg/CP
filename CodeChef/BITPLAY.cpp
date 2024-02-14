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

    ll t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string str;
        cin >> str;

        ll ans = 1;
        ll count = 0;
        for (ll i = 2; i < str.size(); i += 2)
        {
            count = 0;
            ll x = str[i - 2] - '0';
            ll y = str[i - 1] - '0';
            ll z = str[i] - '0';
            if (z == (ll)(x | y))
                count++;
            if (z == (ll)(x & y))
                count++;
            if (z == (ll)(x ^ y))
                count++;

            ans = ans * count;
            ans = ans%MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
