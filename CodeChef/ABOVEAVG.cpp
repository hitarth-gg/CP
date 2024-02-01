#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m,x;
        cin >> n >> m >> x;
        int sum = n*x;
        if(x==m) cout << 0 << endl;
        else
            cout << sum/(x+1) << endl;
    }

    return 0;
}
