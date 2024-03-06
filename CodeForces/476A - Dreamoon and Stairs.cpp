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

    int n, m; cin >> n >> m;

    if(n<m) cout << -1 << endl;
    else
    {
        int k = n/2 + n%2;;
        if(k%m == 0)
            cout << k << endl;
        else
        {
            k = ((k/m) +1)*m;
            if(k<=n)
                cout << k << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
