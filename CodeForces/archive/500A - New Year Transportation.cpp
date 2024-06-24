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

    int n, t ; cin >> n >> t;

    int loc = 1;
    int portal;
    for(int i=1; i<n; i++)
    {
        cin >> portal;
        if(i==loc)
        {
            loc = i+portal;
            if(loc == t)
            {
                cout << "YES" << endl;
                break;
            }
            else if(loc > t)
            {
                cout << "NO";
                break;
            }
        }
        
    }

    return 0;
}
