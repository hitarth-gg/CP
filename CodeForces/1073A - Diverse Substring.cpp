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

    int n; cin >> n;
    string str; cin >> str;
    string res;

    for(int i=0; i<n-1; i++)
    {
        if(str[i] != str[i+1])
        {
            res = str[i]; 
            res += str[i+1];
            break;
        }
    }
    if (res != "")
        cout << "YES" << endl << res << endl;
    else
        cout << "NO" << endl;

    return 0;
}
