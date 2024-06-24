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
        vector<int> v(n);
        // loop(n) cin >> v[i];
        int x=0, y=0;

        loop(n)
        {
            int temp;
            cin >> temp;
            if(i%2==0 && temp%2!=0)
                x++;
            else if (temp%2==0 && i%2 != 0)
                y++;
        }
        if(x==y)
            cout << x << endl;
        else
            cout << -1 << endl;

    }

    return 0;
}
