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

    int t; cin >> t;
    while(t--)
    {
        vector<ll> v(3);
        loop(3)
            cin >> v[i];
        ll n ; cin >> n ;
        sort(v.begin(), v.end());
        ll diff = v[2]-v[0] + v[2] - v[1];
        if(diff>n)
            cout << "NO" << endl;
        else
        {
            int t = n-diff;
            if(t%3==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
