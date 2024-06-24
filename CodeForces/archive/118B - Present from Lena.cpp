#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int n;
    cin >> n;

    for (int i = -n; i <= n; i++)
    {
        for (int j = 0; j < abs(i); j++)
            cout << "  ";

        for (int j = 0; j < n-abs(i); j++)
            cout << j << " ";
        for (int j = n-abs(i); j >0; j--)
            cout << j << " ";
        cout << 0 << endl;
    }

    return 0;
}
