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
        int odd = 0;
        int even = 0;

        if(n<=4)
        {
            odd = n;
            even = 0;
        }
        else
        {
            odd = n-1;
            even = 1;
        }
        cout << even << " " << odd << endl;
    }

    return 0;
}
