#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define fr(i, x, n) for (ll i = x; i < n; i ++)
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int
#define sortv(v) sort(v.begin(), v.end()),
#define sortrv(v) sort(v.rbegin(),v.rend())

// typedef long long ll;

int main()
{
    fastio();

    int n=8;
    int power = 0;
    while(n%2 == 0)
    {
        power++;
        n=n/2;
    }
    if(n!=0)
        cout << power;
    else 
        cout << -1;

    return 0;
}
