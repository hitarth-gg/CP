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
        int n; cin >> n;
        int odd = 0;
        int even = 0;
        for(int i =0; i<n; i++)
        {
            int temp ; cin >> temp;
            if(temp%2 == 0)
                even++;
        }
        odd = n-even;
        
        if(odd==0) // sum = even
            cout << "NO" << endl;
        else
        {
            if(odd == n && n%2 == 0) // sum = even
                cout << "NO" << endl;
            else
                cout << "YES" << endl;

        }
    }

    return 0;
}
