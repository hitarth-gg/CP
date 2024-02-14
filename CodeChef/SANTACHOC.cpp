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
        int n ; cin >> n;
        int k ; cin >> k;

        int arr[n];
        int total=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            total += temp;
        }

        if(total/n < 1)
            cout << "NO" << endl;
        else if (k==0 && total%n != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
