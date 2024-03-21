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
        ll a,b,m ; cin >> a >> b >> m;
        
        ll st = a*b;
        ll sum = 0;
        ll count = 0;
        
        ll sum1 = m/a +1;
        ll sum2 = m/b + 1;
        cout << sum1 + sum2 << endl; 
    }

    return 0;
}
