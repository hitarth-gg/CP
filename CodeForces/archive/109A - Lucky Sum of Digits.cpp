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

    int n;
    cin >> n;
    int ans = 0;
    int c4 = 0;
    int c7 = 0;
    string str = "";

    while (n >= 4)
    {
        if (n % 7 == 0)
        {
            str += '7';
            n = n - 7;
        }
        else
        {
            str += '4';
            n = n - 4;
        }
    }
    if (n > 0)
        cout << -1 << endl;
    else
        cout << str << endl;
    return 0;
}
