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
        vector<ll> v(n+1);

        v[0] = -10000000;
        for(ll i=1; i<=n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        ll count = 1;

        ll index = ceil((n+1)/2);
        // cout <<"Index: " << index << endl;
        for(ll i = index; i<n+1; i++)
        {
            if(v[i+1] == v[i])
                count++;
            else
                break;
        }
        cout << count << endl;
    }

    return 0;
}
