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

    int count = n;

    for (int i = 2; i <= n; i++)
        count += (n - i) * i + 1;
    cout << count << endl;

    return 0;
}
