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
        ll arr[3];
        loop(3) cin >> arr[i];
        sort(arr, arr+3);
        if(arr[2] == arr [1])
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0]<< " " <<arr[2] << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
