#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int temp;
        while (x != 0)
        {
            temp = x;
            x = y % x;
            y = temp;
        }
        cout << y << endl;
    }

    return 0;
}
