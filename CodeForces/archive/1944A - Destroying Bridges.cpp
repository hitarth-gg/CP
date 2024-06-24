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
        int n, k ; cin >> n >> k ;

        int bridgePerIsland = n-1;

        if(bridgePerIsland <= k)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}
