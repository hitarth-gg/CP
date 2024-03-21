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
        string str ; cin >> str;

        bool flag = 0;

        for(int i=0; i<=n/2; i++)
        {
            int diff = abs(str[i]-str[n-1-i]);
            if(diff > 2 || diff == 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
