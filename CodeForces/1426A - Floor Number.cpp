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
        int n, x ; cin >> n >> x;
        
        if(n<=2)
            cout << 1 << endl;
        else if (n>=3 && n <=x+2)
            cout << 2 << endl;
        else
        {
            int floor2 = floor((double)(n-3)/x + 2);
            cout << floor2 << endl;
        }
    }

    return 0;
}
