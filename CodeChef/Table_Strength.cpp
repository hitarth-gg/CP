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
        vector<int> v(n);

        loop(n)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        int largest = -1;

        vector<int> h(n+1);
        h[0] = -1;

        for(int i =1; i<n+1; i++)
            h[i] = v[i-1];
        for(int i = 1; i<n+1; i++)
            if(i*h[i] > largest)
                largest = i*h[i];
        cout << largest << endl;

    }

    return 0;
}
