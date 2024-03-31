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
        int a, b ; cin >> a >> b;
        int side = min(a,b);
        if(side*2 >= max(a, b))
            cout << side*side*4 << endl;
        else
            cout << max(a,b)*max(a,b) << endl;

    }

    return 0;
}
