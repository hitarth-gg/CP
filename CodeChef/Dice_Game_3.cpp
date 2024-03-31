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
        int n ; cin >> n ;
        if(n%2==0)
            cout << 6*n + n/2 << endl;
        else
            cout << 6*(n-1) + (n-1)/2 + 6 << endl;
    }

    return 0;
}
