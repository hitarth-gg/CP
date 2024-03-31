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
bool checkRes(int x, int a, int b)
{
    int a1[2] = {a+x, a-x}; 
    int b1[2] = {b-x, b+x};
    // cout << a1[0] << " " << b1[0] << endl;
    // cout << a1[1] << " " << b1[1] << endl;
    if((a1[0]%b1[0] == 0 && (a1[0] > 0 && b1[0] > 0)) || (a1[1]%b1[1] == 0 && ( a1[1] > 0 && b1[1] > 0)))
        return true;
    else 
        return false;
}
int main()
{
    fastio();

    int a, b ; 
    int t; cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int rem = a%b;
        int ans = -1;
        for(int i = 0; i<= max(a,b); i++)
        {
            if(checkRes(i, a, b) == true)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        // cout << "-----------" << endl;
    }

    return 0;
}
