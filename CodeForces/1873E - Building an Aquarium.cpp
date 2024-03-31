#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define fr(i, x, n) for (ll i = x; i < n; i++)
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int
#define sortv(v) sort(v.begin(), v.end())
#define sortrv(v) sort(v.rbegin(), v.rend())

// typedef long long ll;



int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        loop(n) cin >> v[i];

        ll l = 0, r = INT_MAX;
        
        while(l+1 < r)
        {
            ll mid = (l+r)/2;
            ll total = 0;
            fr(i, 0, n)
                total += max(mid-v[i], 0LL);
            if(total>x)
                r=mid;
            else
                l=mid;
        }

        cout << l << endl;
    }

    return 0;
}
