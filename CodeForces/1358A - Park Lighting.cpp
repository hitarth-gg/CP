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
        int n, m ; cin >> n >> m ;
        int nE = n+1;
        int mE = m+1;

        int total = 0;
        
        if(n%2==0)
        {
            total += m*(n/2);
        }
        else if(m%2==0)
            total += n*(m/2);
        else
        {
            if(n<m)
                total += n*(m-1)/2 + (n-1)/2 +1;
            else
                total += m*(n-1)/2 + (m-1)/2 +1;
        }
        cout << total << endl;
    }

    return 0;
}
