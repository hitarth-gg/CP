#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int n = r - l + 1;

        vector<int> v(n);

        loop(n)
            v[i] = i + l;

        // if (gcd(l, r) == 1)
        if(l%2==0 && r%2==0)
            cout << -1 << endl;
        else
        {
            if (n % 2 == 0)
            {
                for (int i = 0; i < n; i += 2)
                {
                    swap(v[i], v[i + 1]);
                }
            }
            else
            {
                for (int i = 0; i < n - 1; i += 2)
                {
                    swap(v[i], v[i + 1]);
                }
                swap(v[n - 3], v[n - 1]);
            }
            for (auto it : v)
                cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}
