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
        int n,k ; cin >> n >> k ;
        string str ; cin >> str;
        int n1 = 0;

        for(int i = 0; i<n; i++)
            if(str[i]=='1')
                n1++;
        if(n1<=k && k)
        {
            for(int i=0; i<n-k; i++)
                cout << 0;
            cout << endl;
        }
        else
        {
            for(int i=0; i<n && k; i++)
                if(str[i]=='1')
                    str[i]='0';
            cout << str << endl;
        }

    }

    return 0;
}
