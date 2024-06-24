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

    ll n ; cin >> n ;
    ll arr[n];

    loop(n)
        cin >> arr[i];

    ll total = arr[n-1];
    ll last = arr[n-1];

    for (ll i =n-2; i>=0; i--)
    {
        if(last>arr[i])
        {
            total += arr[i];
            last = arr[i];
        }
        else if (arr[i] >= last && last)
        {
            last = last-1;
            total += last;
        }
        else
            break;
    }
    cout << total << endl;
    

    return 0;
}
