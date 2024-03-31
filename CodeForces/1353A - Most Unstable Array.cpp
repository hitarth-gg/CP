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
        ll n, m ; cin >> n >> m ;
        if(n==1)
            cout << 0 << endl;
        else if(n==2)
            cout << m << endl;
        else
            cout << m*2 << endl;
    }

    return 0;
}
