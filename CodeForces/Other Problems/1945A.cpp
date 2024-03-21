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
        int i, e, u;
        cin >> i >> e >> u;

        int f = e % 3;
        if (f + u >= 3 || f == 0)
        {
            int total_tents = 0;
            total_tents += i;

            total_tents += (e + u) / 3;
            int x = (e + u) % 3;
            if (x > 0)
                total_tents += 1;
            cout << total_tents << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
