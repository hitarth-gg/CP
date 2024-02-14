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
        int n;
        cin >> n;
        int sum = 0;
        int even = 0;
        int odd = 0;
        loop(n)
        {
            int temp;
            cin >> temp;
            if (temp % 2 == 0)
                even = 1;
            else
                odd = 1;
            sum += temp;
        }

        if (odd && even)
            cout << "No" << endl;
        else
        {
            if (even && sum % n == 0 && (sum / n) % 2 == 0)
                cout << "Yes" << endl;
            else if (odd && sum % n == 0 && (sum / n) % 2 != 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
