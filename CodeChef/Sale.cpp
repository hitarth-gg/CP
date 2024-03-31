#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    ll t; cin >> t;
    while(t--)
    {
        ll n ; cin >> n ;
        vector<ll> v(n);

        loop(n)
            cin >> v[i];
        
        ll pre[n];
        pre[0] = v[0];
        for(ll i=1; i<n;i++)
        {
            pre[i] = pre[i-1] + v[i];
        }

        for(ll i=0; i<n; i++)
        {
            pre[i] = v[i] + pre[i];
        }

        ll max2 = INT_MIN;
        loop(n)
        {
            if(pre[i] > max2)
                max2 = pre[i];
        }
        cout << max2 << endl;
    }

    return 0;
}
